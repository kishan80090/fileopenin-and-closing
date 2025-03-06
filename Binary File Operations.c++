#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int age;
};

int main() {
    Student s = {"John", 20};
    ofstream file("student.dat", ios::binary);
    file.write((char*)&s, sizeof(s));
    file.close();
    return 0;
}
