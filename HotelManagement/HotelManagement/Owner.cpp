#include "Owner.h"

void Owner::Operation()
{
    int options;
    do {
        cout << "1. Modify menu" << endl << "2. Display Menu" << endl << "3. Exit" << endl;
        cin >> options;
        switch (options) {
        case 1:
        {
            modifyMenu();
        }
        break;
        case 2: {
            displayMenu();
        }
              break;
        
        case 3:
        {

        }
        }
    } while (options != 3);
}

void Owner::modifyMenu()
{
    DisplayMenu();
    cout << endl;
    int options;
    cout << "1. Add to menu" <<endl <<"2.Remove from menu"<<endl;
    cin >> options;
    options == 1 ? addToMenu(&myMenu) : removeFromMenu();
}

void Owner::addToMenu(map<int,string>* myMneu)
{
    int numOfItems;
    cout << "Enter no. of items you want to add :";
    cin >> numOfItems;
    for (int i = 0;i < numOfItems;i++)
    {
        int dishNumber;
        string dishName;
        cout << "Enter index of item ";
        cin >> dishNumber;
        cout << "Enter dish name : ";
        cin >>dishName;
        myMenu.insert(pair<int, string>(dishNumber, dishName));
    }

}

void Owner::removeFromMenu()
{
    int numOfItems;
    cout << "Enter no. of items you want to remove :";
    cin >> numOfItems;
    for (int i = 0;i < numOfItems;i++)
    {
        int dishNumber;
        cout << "Enter" << i << "th item ";
        cin >> dishNumber;

        myMenu.erase(dishNumber);
    }

}

void Owner::displayMenu()
{
    cout << "Menu is : " << endl;
    map<int, string>::iterator itr = myMenu.begin();
    for (itr;itr != myMenu.end();++itr) {
        cout << itr->first << " " << itr->second << endl;
    }
}
