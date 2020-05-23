// ClassTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template<typename T,typename U >
class Entity {
private : 
    T m_var1;
    U m_var2;

public : 
    Entity(T para1,U para2)
    {
        m_var1 = para1;
        m_var2 = para2;
    }

    void Display()
    {
        cout << "the type as follows : " << typeid(m_var1).name() <<typeid(m_var2).name() <<endl;
}

    U Add()
    {
        return m_var1 + m_var2;
    }
};


int main()
{
    Entity<int,char> entity(5,65);
    entity.Display();
    cout << entity.Add()<<endl;

   /* Entity<float> entity2(5.5f, 6.5f);
    entity2.Display();
    cout << entity2.Add()<<endl;

    Entity<string> entity3("sarvagya","jain");
    entity3.Display();
    cout << entity3.Add() << endl;*/
    std::cout << "Hello World!\n";
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
