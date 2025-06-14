#include <iostream>
using namespace std;



void funcHello() {
    cout << "Hello Github";
}

string func2print(string comment) {
    return comment;
}

void main()
{
    cout << "We commit this code with VS Studio!!!";

    //перший
    funcHello();




    //другий

    float a, b;
    cin >> a >> b;
    cout << a * b;


    // третій

    string comment;
    cout << "Enter your comment: ";
    cin >> comment;
    cout << func2print(comment);
}

