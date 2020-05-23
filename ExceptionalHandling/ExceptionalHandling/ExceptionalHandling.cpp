// ExceptionalHandling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Demo.h"
using namespace std;

void displayPositiveValue(int &value)
{
    int temp = value;
    temp > 0 ? cout << value : throw "Exception thrown : Invalid value";
 }
int main()
{
    std::cout << "Hello World!\n";
    int value = 4;

    try {
        displayPositiveValue(value);
    }
    catch (const char* ex) {
        cout << ex<< endl;
    }
    int arr[] = { 1,2,3 };
    try {
        Demo* demo = new Demo(arr);
    }
    catch (exception ex)
    {
        cout << ex.what();
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
