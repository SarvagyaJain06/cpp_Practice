#include "Person.h"

void Person::LoadMenu()
{
    for (int i = 0;i < sizeof(Menu) / sizeof(Menu[0]);i++)
    {
        myMenu.insert(pair<int, string>(i + 1, Menu[i]));
    }
}

void Person::DisplayMenu()
{
    map<int, string>::iterator itr = myMenu.begin();
    for (int i = 0;i < sizeof(Menu) / sizeof(Menu[0]);i++, itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}

string Person::ItemName(int key)
{
    return myMenu[key];
}
