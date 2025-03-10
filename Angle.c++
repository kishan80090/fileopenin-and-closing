#include <iostream>
using namespace std;

class Angle 
{
private:
    int angle;

public:
    Angle(int a = 0) : angle(a) {}

    void setAngle(int a) 
	{
        angle = a;
    }

    int getAngle() const
	 {
        return angle;
    }
    
    friend ostream & operator<<(ostream& out, const Angle& a)
	 {
        out << "Angle: " << a.angle;
        return out;
    }
    
    friend istream& operator>>(istream& in, Angle& a) 
	{
        cout << "Enter angle: ";
        in >> a.angle;
        return in;
    }

    int operator<(const Angle& other) const
	 {
        return angle < other.angle;
    }


    int operator>(const Angle& other) const
	 {
        return angle > other.angle;
    }

    int operator<=(const Angle& other) const
	 {
        return angle <= other.angle;
    }
    
    int operator>=(const Angle& other) const 
	{
        return angle >= other.angle;
    }

    int operator==(const Angle& other) const
	 {
        return angle == other.angle;
    }

    int operator!=(const Angle& other) const 
	{
        return angle != other.angle;
    }

    void v1()
	 {
        angle = angle % 360;
        
        if (angle < 0) 
		{
            angle = angle+360;
        }
    }
    
    void display() const 
	{
        cout << "Angle: " << angle<< endl;
    }
};

int main()
 {
    Angle a1, a2;

     cin >> a1;
    cin >> a2;

     cout << a1 << endl;
    cout << a2 << endl;

     a1.v1();
     a2.v1();
     
     a1.display();
     a2.display();
     
    return 0;
}

