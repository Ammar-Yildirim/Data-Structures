// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Class 
class Rectangle {
private:
    int length;
    int width;

public:
//Function Declarations
    Rectangle();
    Rectangle(int l, int w);
    int area();
    int perimeter();
    int getLength();
    void setLength(int l);
    ~Rectangle();
};

//Function Definitions
Rectangle::Rectangle() {
    length = 0;
    width = 0;
}
Rectangle::Rectangle(int l, int w) {
    length = l;
    width = w;
}
int Rectangle::area() {
    return length * width;
}
int Rectangle::perimeter() {
    return 2 * (length + width);
}
int Rectangle::getLength() {
    return length;
}
void Rectangle::setLength(int l) {
    length = l;
}
Rectangle::~Rectangle() {
    cout << "BOOM!";
}

int main()
{
    Rectangle r(10,15);

    cout << r.area() << " ";
    cout << r.perimeter() << endl;

    r.setLength(1);
    cout << r.getLength() << endl;
    
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
