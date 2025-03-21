#include<iostream>
using namespace std;
class Student
{
public: 
string name;
int age;
Student(string n,int a)
{
name=n;
age=a;
}
};
class Student1:public Student          
{
public:  Student1(string n,int a): Student(n, a){}
void display()
{
cout<<"Name = "<<Student::name<<endl;
cout<<"Age =  "<<Student::age<<endl;
}
};
int main()
{
Student1 student("Ravi",13);
student.display();
return 0;
}
