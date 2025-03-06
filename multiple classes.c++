#include <iostream>
using namespace std;

class ClassB;
class ClassA 
{
private:
    int numA;
public:
    ClassA(int val) : numA(val) {}
    friend void add(ClassA, ClassB);
};

class ClassB
 {
private:
    int numB;
public:
    ClassB(int val) : numB(val) {}
    friend void add(ClassA, ClassB);
};

void add(ClassA objA, ClassB objB)
 {
    cout << "Sum: " << objA.numA + objB.numB << endl;
}

int main() 
{
    ClassA a(10);
    ClassB b(20);
    add(a, b);
    return 0;
}
