 #include <iostream>
#include <chrono>
#include <thread>

using namespace std;

// Function to clear the screen
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Function to display the moving van
void drawVan(int position) {
    clearScreen(); // Clear previous frame

    // Move the van to the right by printing spaces
    for (int i = 0; i < position; i++) {
        cout << " ";
    }

    // ASCII Art of a simple van
    cout << "   ______" << endl;
    for (int i = 0; i < position; i++) {
        cout << " ";
    }
    cout << "  |      |" << endl;
    for (int i = 0; i < position; i++) {
        cout << " ";
    }
    cout << "  O------O" << endl;
}

// Main function
int main() {
    int position = 0;
    const int roadLength = 40; // Define road length

    while (true) {
        drawVan(position); // Draw the van at current position
        this_thread::sleep_for(chrono::milliseconds(200)); // Delay for animation

        position++; // Move the van forward

        // Reset position if van reaches end of screen
        if (position > roadLength) {
            position = 0;
        }
    }

    return 0;
}
