#include "User.h"

void User::displayOrder()
{ 
    cout << "Your order is : " << endl;
    map<int, string>::iterator itr = m_order.begin();
    for (itr;itr != m_order.end();++itr) {
        cout << itr->first << " " << itr->second << endl;
    }
}

void User::addInOrder()
{
    int numOfItems;
    cout << "Enter no. of items you want to add :";
        cin >> numOfItems;
        map<int, string>::iterator itr = myMenu.begin();
        for (int i = 0;i < numOfItems;i++)
        {
            int dishNumber;
            cout << "Enter" << i << "th item ";
            cin >> dishNumber;
            
            m_order.insert(pair<int, string>(dishNumber,ItemName(dishNumber)));
        }
}

void User::removeFromOrder()
{
    int numOfItems;
    cout << "Enter no. of items you want to remove :";
    cin >> numOfItems;
    map<int, string>::iterator itr = myMenu.begin();
    for (int i = 0;i < numOfItems;i++)
    {
        int dishNumber;
        cout << "Enter" << i << "th item ";
        cin >> dishNumber;

        m_order.erase(dishNumber);
    }

}

void User::modifyOrder()
{
    int input;
    displayOrder();
    cout << "1. Add to order" << endl << "2. Remove from order" << endl;
    cin >> input;
    input == 1 ? addInOrder() : removeFromOrder();

}

void User::displayBill()
{
    map<int, string>::iterator itr = m_order.begin();
    int sum = 0;
    for (itr;itr != m_order.end();++itr) {
        cout << itr->second << " " << rate(itr->second)<<endl;
        sum += 20;
    }
    cout << "Total bill = " <<sum <<endl;
}


int User::rate(string dishName)
{
    if (dishName == "Dal")
        return 10;
    else if (dishName == "Mishri")
        return 20;
    else if (dishName == "Pan")
        return 30;
    else if (dishName == "Masala")
        return 40;
}


void User::Operation()
{
        int options;
     do {
         cout << "1. Place order" << endl << "2. Display Order" << endl << "3. Add in order" << endl << "4. Bill" << endl << "5. Exit" << endl;
         cin >> options;
            switch (options) {
            case 1:
            {
                cout << "Thank you for placing the order..." << endl;
            }
            break;
            case 2:
            {
                displayOrder();
            }
            break;
            case 3:
            {
                modifyOrder();
                displayOrder();
            }
            break;
            case 4:
            {
                displayBill();
            }
            break;
            case 5:
            {
            }
            break;
            }
        } while ((options > 1) && (options < 5));
   }    
