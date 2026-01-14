#include <iostream>
using namespace std;

int main() {

    //if statements = do something if a condition is true.
    //                if not, then dont do it.


    int age;

    cout << "Enter your age: ";
    cin >> age ;

    if (age >=18)
    {
        cout << "Welcome to the site !";
    }
    else if( age < 0){
        cout << "You havent been born yet !";
    }

    else if (age > 100){
        cout << "You are too old to enter this site";
    }

    else{
        cout << "You are not old enough to enter !";
    }
    
    return 0;
}