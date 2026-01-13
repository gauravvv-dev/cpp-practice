#include <iostream>
using namespace std;

int main() {

    // cout << (insertion operator)
    // cin >> (extraction operator)

    string name;
    int age;
    int clas ;

    cout<< "What's your age :";
    cin>> age ;

    cout << "In which class you study ?";
    cin >> clas ;

    cout << "What's your name ?:";
    getline(cin >> ws, name);               //getline function helps us to enter the name with spaces. Without getline when using a string we cant use spaces 

    cout << "Hello " << name << " your age is " << age << endl;




    return 0;
}