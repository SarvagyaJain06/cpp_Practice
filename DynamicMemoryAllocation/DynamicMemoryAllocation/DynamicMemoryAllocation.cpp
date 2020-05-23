// DynamicMemoryAllocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>

using namespace std;

class Ptr
{
    
private: int m_var;
public :
     Ptr(int g) {
         cout << "constructor is called";
         this->m_var =
             m_var =
    }
     ~Ptr()
     {
      
         cout << "destructor is called" << endl;
     }
    int  get() {
     
        return m_var;
     }
     void set(int var)
     {
            m_var = var;
     }

};

//void func(int& ptr)
//{
//    ptr->set(4);
//    int ans = ptr->get();
//    cout << endl;
//    cout << "val :" << ans << endl;
//    delete ptr;
//    std::cout << "Hello World!\n";
//}
int main()
{
    Ptr* ptr = new Ptr();

   // delete ptr;
    /*{
        Ptr* ptr = new Ptr();
    }
    ptr->set(4);*/
    /* ptr->set(4);
int ans =   ptr->get();
cout << endl;
cout << "val :" << ans << endl;
delete ptr;
    std::cout << "Hello World!\n";*/
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
