#include <iostream>
using namespace std;
// Main program
main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cout << "masukkan operator:";
    cin >> op;
    // It allow user to enter the operands
    cout << "masukkan angka1 & 2";
    cin >> num1 >> num2;
    //switch statment begins
    switch(op)
    {
    // if user enter +
    case '+':
        cout << num1 + num2;
        break;
     //if user enter -
     case '-':
        cout << num1 - num2;
        break;
    //if user enter *
    case '*':
        cout << num1 * num2;
        break;
    //if user enter /
    case '/':
        cout << num1 / num2;
        break;
    //if the operator is other than +, -, * or /,
    //eror massage will display
    default:
        cout << "eror! operator is not correct";
    }// switch statement ends
    return 0;
}