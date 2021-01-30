#include <iostream>
using namespace std;

int operation;

void add(){
    int x;
    int y;
    cout << "Enter first number: " ;
    cin >> x;
    cout << "Enter second number: " ;
    cin >> y;
    cout << x+y;
}

void subtract(){
    int x;
    int y;
    cout << "Enter first number: " ;
    cin >> x;
    cout << "Enter second number: " ;
    cin >> y;
    cout << (x-y);
}

void multiply(){
    int x;
    int y;
    cout << "Enter first number: " ;
    cin >> x;
    cout << "Enter second number: " ;
    cin >> y;
    cout << (x*y);
}

void division(){
    int x;
    int y;
    cout << "Enter first number: " ;
    cin >> x;
    cout << "Enter second number: " ;
    cin >> y;
    cout << (x/y);
}

int main()
{
    cout << "1. Addition \n";
    cout << "2. Subtraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";
    cout << "Choose your operation; ";
    cin >> operation;

    if (operation==1)
        add();
    else if (operation==2)
        subtract();
    else if (operation==3)
        multiply();
    else if (operation==4)
        division();
    else
        cout << "Invalid Input" ;
}