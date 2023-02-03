// Functions_Parameter_Passing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Pass by value
int add(int a, int b) {
    int c;
    c = a + b;
     
    return c;
}
//Pass by address
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
//Pass by reference
void increase(int& x, int& y, int inc) {
    x = x + inc;
    y = y + inc;
}

int main()
{
    int x = 10, y = 15, z;
    z = add(x, y);
    cout << z << endl;

    swap(&x, &y);
    cout << "First number: " << x <<  endl;
    cout << "Second number: " << y << endl;

    increase(x, y, 10);
    cout << "First number: " << x << endl;
    cout << "Second number: " << y << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
