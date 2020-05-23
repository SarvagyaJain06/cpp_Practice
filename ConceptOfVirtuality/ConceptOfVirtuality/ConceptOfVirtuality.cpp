// ConceptOfVirtuality.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Vehicle {
protected : 
   // static const int num =4;
    string m_name, m_model;
    int m_yearOfManufacturing,m_tyreCount ;
public :
    virtual void start() = 0;//{ cout << "call in base class" << endl; };
    virtual void stop() = 0;/*{
        cout << "call in base class" << endl;*/
    //};
};

class Car : public Vehicle {
public: 
    Car(string name,string model,int yearOfManufacturing,int tyreCount)  {
        m_name = name;
        m_model = model;
        m_yearOfManufacturing = yearOfManufacturing;
        m_tyreCount = tyreCount;
    }
    void start()
    {
        cout << "Car is started." << endl;
    }
    void stop()
    {
        cout << "Car is stopped." << endl;
    }
};

class Bus : public Vehicle {
public:
    Bus(string name, string model, int yearOfManufacturing, int tyreCount) {
        m_name = name;
        m_model = model;
        m_yearOfManufacturing = yearOfManufacturing;
        m_tyreCount = tyreCount;
    }
    void start()
    {
        cout << "Bus is started." << endl;
    }
    void start(int key)
    {
        cout << "Bus is started." << endl;
    }
    void stop()
    {
        cout << "Bus is stopped." << endl;
    }
};


class Train : public Vehicle {
public:
    Train(string name, string model, int yearOfManufacturing, int tyreCount) {
        m_name = name;
        m_model = model;
        m_yearOfManufacturing = yearOfManufacturing;
        m_tyreCount = tyreCount;
    }
    void start()
    {
        cout << "Train is started." << endl;
    }
    void stop()
    {
        cout << "Train is stopped." << endl;
    }
};

class Auto : public Vehicle {
public:
    Auto(string name, string model, int yearOfManufacturing, int tyreCount) {
        m_name = name;
        m_model = model;
        m_yearOfManufacturing = yearOfManufacturing;
        m_tyreCount = tyreCount;
    }
    void start()
    {
        cout << "Auto is started." << endl;
    }
    void stop()
    {
        cout << "Auto is stopped." << endl;
    }
};
int main()
{
   // Vehicle* vehicle = new Vehicle();
    Vehicle* alto = new Car("alto", "M13", 2015, 4);
    Vehicle* pmpl = new Bus("PPLM", "Bus$42", 1993, 4);
    Vehicle* train = new Train("Express", "114563", 1947, 576);
    Vehicle* aut = new Auto("theAuto", "MR77", 2019, 3);

    Vehicle* arrayOfVehicle[4] = {
        alto,pmpl,train,aut
    };
    cout << "=====================" << endl;
    for (int i = 0;i < 4;i++)
    {
        arrayOfVehicle[i]->start();
    }
    cout << "====================="<<endl;
    for (int i = 0;i < 4;i++)
    {
        arrayOfVehicle[i]->stop();
    }
    cout << "=====================" << endl;
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
