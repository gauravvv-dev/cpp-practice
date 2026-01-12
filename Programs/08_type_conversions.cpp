#include <iostream>
using namespace std;

int main() {

    //type conversion = conversion a value of one data type to another
    //                Implicit = automatic
    //                Explicit = Precede value with new data type (int)

    // example of implicit
    int x = 3.14;
    cout << x << endl;

    char e = 100;
    cout << e << endl;

    // example of explicit
    double y = (int)3.14;
    cout << y << endl;

    cout << (char)100 << endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    cout << score << "%" << endl;
    



    return 0;
}