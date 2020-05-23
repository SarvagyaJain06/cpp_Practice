#pragma once
#include <iostream>
#include "Person.h"

class Owner :public Person {
private:

public:
    Owner(string name) : Person(name)
    {
 }
    void Operation();
    void modifyMenu();
    void addToMenu(map<int, string> *myMneu);
    void removeFromMenu();
    void displayMenu();
};