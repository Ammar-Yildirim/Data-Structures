// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    //Basics

    /*
    int a = 10;
    int* p; 
    p = &a;

    cout << a << endl;
    cout << "Uing pointer: " << *p;
    */

    //Arrays and Pointers

    /*
    int A[5] = {2,4,6,8,10};
    int* p;
    p = A;

    cout << "using A: " << A[1] << endl;
    cout << "using p: " << p[1] << endl;
    cout << "using dereferencing: " << *(p+1) << endl;
    */
    
    //Heap = C vs C++
    
    //int* p = (int*)malloc(sizeof(int) * 3);
    int *p = new int[5];
    p[0] = 11; p[1] = 21; p[2] = 31; 

    cout << *(p + 1) << endl;

    //free(p);
    delete[]p;

    return 0;
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
