#include <iostream>
using namespace std;
int main()
{
    // int that stores whole numbers 
    int a = 123;
    //cout << a << endl;

    // char that stores a single character 
    char b = 'i';
    
    //boolean (true or false)
    bool student = true;
    

    // float that stores decimal value 
    float f = 1.2;
    
    // double that also stores decimal
    double d = 1.23;
    
    //size of that tells the size of the data type 
    int size = sizeof(a);
   
    // type conversions 
    int a = 'a';
    char ch = 98;

    // string (object that represent a sequence of text)

    string name = "Bro";
    string day = "Friday";
    string food = "Pizza";
    string address = "123 Fake St.";
    cout << "Hello " << name << '\n';
    cout << "Today is "<< day << endl;

}