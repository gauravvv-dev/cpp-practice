#include <iostream>
using namespace std;
int main(){

    // typedef is used to create a new name ( alias) for an existing data type. It does not create a new type-- it gives a shorted or clearer name to an existing one.


    typedef int marks;
    using marks = int;
    
    marks a =90;
    marks b =80;

    cout << "marks of a is "<< a << endl;
    cout << b << endl;
}