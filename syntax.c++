#include <iostream>
using namespace std;

class MyClass 
{
private:
    int data;
public:

    MyClass(int val) : data(val) {}
    friend void displayData(MyClass obj);
};

void displayData(MyClass obj) 

{
    cout << "Private Data: " << obj.data << endl;
}

int main() 
{
    MyClass obj(1);
    displayData(obj);
    return 0;
}
