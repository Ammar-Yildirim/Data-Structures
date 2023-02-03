// 17.01.2023.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include <iostream>
using namespace std;


//Definition of a structre
struct Product {
    char name[20];
    int price;
};//r1, r2, r3; You can declare structs here

//You can declare a struct here
//struct Rectangle r1; 

int main()
{
    //Structs
    struct Product products[5];
    int N = 1;

    cout << "How many products" << endl;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Name: ";
        cin >> products[i].name;
        cout << "Price: ";
        cin >> products[i].price;
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << products[i].name << " " << products[i].price<<endl;
    }
    
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
