#include <iostream>
using namespace std;

int main() {

    string name;
    int age;

    cout<< "What's your age :";
    cin>> age ;

    cout << "What's your name ?:";
    getline(cin >> ws, name);               //getline function helps us to enter the name with spaces. Without getline when using a string we cant use spaces 

    cout << "Hello " << name << " your age is " << age << endl;




    return 0;
}