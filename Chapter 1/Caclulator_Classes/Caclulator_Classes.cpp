// Caclulator_Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <class T>
class Calc {
private:
    T num1;
    T num2;
public:
    Calc(T num1, T num2);
    T sum();
    T subtract();
    T multiply();
    T divide();
};

template <class T>
Calc<T>::Calc(T num1, T num2) {
    this->num1 = num1;
    this->num2 = num2;
}

template <class T>
T Calc<T>::sum() {
    return num1 + num2;
}

template<class T>
T Calc<T>::subtract() {
    return num1 - num2;
}
template<class T>
T Calc<T>::multiply() {
    return num1 * num2;
}
template<class T>
T Calc<T>::divide() {
    return num1 / num2;
}

int main()
{
    Calc<float> c(6.1, 3.05);
    cout << c.sum()<<endl;
    cout << c.subtract()<<endl;
    cout << c.multiply() << endl;
    cout << c.divide()<<endl;
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
