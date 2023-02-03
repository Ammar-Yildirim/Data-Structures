// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


template<class T>
class Arithmetics {
private:
    T a;
    T b;
public:
    Arithmetics(T a, T b);
    T add();
    T subtract();
    T multiply();
    T divide();
};

template<class T>
    Arithmetics<T>::Arithmetics(T a, T b) { 
        this->a = a;
        this->b = b;
    } 

    template<class T>
    T Arithmetics<T>::add() {
        T c;
        c = a + b;
        return c;
    }
    
    template<class T>
    T Arithmetics<T>::subtract() {
        T c;
        c = a - b;
        return c;
    }

    template<class T>
    T Arithmetics<T>::multiply() {
        T c;
        c = a * b;
        return c;
    }

    template<class T>
    T Arithmetics<T>::divide(){
        T c;
        c = a / b;
        return c;
    }

int main()
{
    Arithmetics<float> ar(10.5, 5.1);
    cout << ar.add()<<endl;
    cout << ar.subtract()<<endl;
    cout << ar.multiply()<<endl;
    cout << ar.divide()<<endl;

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
