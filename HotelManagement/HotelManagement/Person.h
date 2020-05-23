#pragma once
#include <iostream>
#include <map>
#include<string>
using namespace std;
class Person {
    string m_name;
    string Menu[4] = { "Dal","Mishri","Pan","Masala" };

public:
    Person(string name)
    {
        m_name = name;
    }
    virtual void Operation() = 0;

    map<int, string> myMenu;
    void LoadMenu();
    void DisplayMenu();
    string ItemName(int key);
};