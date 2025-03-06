#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ifstream file("example.txt");
    string line;
    while (getline(file, line))
	 {
	 cout<< file << line<<endl;
    }
    file.close();
    return 0;
}
