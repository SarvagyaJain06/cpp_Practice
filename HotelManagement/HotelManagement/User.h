#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class User :public Person {
private:
    map<int, string> m_order;
    void displayOrder();
    void addInOrder();
    void removeFromOrder();
    void modifyOrder();
    void displayBill();
    int rate(string dishName);
public:
    User(string name) : Person(name)
    {

    }
    void Operation();
};