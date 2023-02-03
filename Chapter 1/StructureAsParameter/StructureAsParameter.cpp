// StructureAsParameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

/*void fun(struct Rectangle *r) {
    r->length = 20;
    cout << "Length: " << r->length << endl << "Breadth: " << r->width << endl;
}*/

struct Rectangle* fun() {
    struct Rectangle* p; //Create the pointer
    p = new Rectangle;  //Make it point to heap

    p->length = 20;
    p->width = 7;

    return p;
}

int main()
{
    /*
    struct Rectangle r = {10,5};

    fun(&r);

    cout << r.length << endl;
    cout << r.width << endl;
    */

    struct Rectangle* ptr;
    ptr = fun();

    cout << ptr->length << endl;
    cout << ptr->width << endl;

    delete(ptr);

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
