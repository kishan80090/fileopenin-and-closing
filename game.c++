#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Car class
class Car {
public:
    sf::RectangleShape shape;
    float speed;

    Car(float x, float y) {
        shape.setSize(sf::Vector2f(50, 100)); // car size
        shape.setFillColor(sf::Color::Blue);  // car color
        shape.setPosition(x, y);
        speed = 0.1f;  // Car movement speed
    }

    void moveCar(sf::RenderWindow& window, bool left, bool right) {
        if (left && shape.getPosition().x > 0)
            shape.move(-speed, 0);
        if (right && shape.getPosition().x < window.getSize().x - shape.getSize().x)
            shape.move(speed, 0);
    }

    void draw(sf::RenderWindow& window) {
        window.draw(shape);
    }
};

// Obstacle class
class Obstacle {
public:
    sf::RectangleShape shape;
    float speed;

    Obstacle(float x, float y) {
        shape.setSize(sf::Vector2f(50, 50)); // obstacle size
        shape.setFillColor(sf::Color::Red);   // obstacle color
        shape.setPosition(x, y);
        speed = 0.2f;  // obstacle falling speed
    }

    void move() {
        shape.move(0, speed);
    }

    void draw(sf::RenderWindow& window) {
        window.draw(shape);
    }

    bool offScreen(sf::RenderWindow& window) {
        return shape.getPosition().y > window.getSize().y;
    }

    sf::FloatRect getBounds() {
        return shape.getGlobalBounds();
    }
};

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Road Car Game");

    // Car object
    Car playerCar(375, 500);

    // Obstacle list
    std::vector<Obstacle> obstacles;

    // Clock for generating obstacles and controlling frame rate
    sf::Clock clock;
    srand(time(0));

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Move car
        bool moveLeft = false, moveRight = false;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            moveLeft = true;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            moveRight = true;

        playerCar.moveCar(window, moveLeft, moveRight);

        // Generate obstacles
        if (clock.getElapsedTime().asSeconds() > 1.0f) {
            float xPos = rand() % (window.getSize().x - 50);  // Random X position
            obstacles.push_back(Obstacle(xPos, -50));  // Add new obstacle above the screen
            clock.restart();
        }

        // Move obstacles and check collisions
        for (auto& obstacle : obstacles) {
            obstacle.move();

            // Collision detection
            if (obstacle.getBounds().intersects(playerCar.shape.getGlobalBounds())) {
                std::cout << "Game Over!" << std::endl;
                window.close();
            }
        }

        // Remove off-screen obstacles
        obstacles.erase(std::remove_if(obstacles.begin(), obstacles.end(),
                                       [&window](Obstacle& obstacle) { return obstacle.offScreen(window); }),
                        obstacles.end());

        // Clear the window
        window.clear(sf::Color::White);

        // Draw everything
        playerCar.draw(window);
        for (auto& obstacle : obstacles) {
            obstacle.draw(window);
        }

        // Display the contents of the window
        window.display();
    }

    return 0;
}

