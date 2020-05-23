// smartPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

using namespace std;

#pragma region StudentClass
class Student
{
public:
    Student() {
        cout << "constructor is called..." << endl;
    }

    ~Student() {
        cout << "destructor is called..." << endl;

    }
};

#pragma endregion

#pragma region RectangleClass
class Rectangle{
private:
    int m_length, m_breadth;

public:
    Rectangle(int length, int breadth) {
        m_length = length;
        m_breadth = breadth;
    }
    int area()
    {
        return m_length * m_breadth;
    }

};
#pragma endregion



int main()
{
   //smart pointers
/*
#pragma region SharedPointer
    //unique pointers 
    unique_ptr<Student> studentUniquePointer = make_unique<Student>(); //unique pointer...can't assign reference to other
    //
    //    unique_ptr<Student> studentUniquePointer2 = studentUniquePointer;
    //

    //shared pointers
    shared_ptr<Student> studentSharedPointer = make_shared<Student>(); //shared pointer can be assigned to other references and exits till reference count is zero
    shared_ptr<Student> studentSecondSharedPointer;
    studentSecondSharedPointer = studentSharedPointer;

    //weak pointers
    weak_ptr<Student> studentWeakPointer = studentSecondSharedPointer;//nickname or reference to the pointer object
    // it dies as studentSecondSharedPointer dies.



#pragma endregion   

    
#pragma region UniquePointer
   
    {
        unique_ptr < Rectangle>rectangle(new Rectangle(4, 5));
        cout << "area : " << rectangle->area() << endl;

        unique_ptr <Rectangle> rectangle2;
        rectangle2 = move(rectangle); //transfer control as we can only assign one reference ata time for unique pointer
        cout << "area : " << rectangle2->area() << endl;

        cout << rectangle->area() << endl << rectangle2;

    }
#pragma endregion

#pragma region weakPointer
    weak_ptr <Student> referenceRectangle = studentSecondSharedPointer; // reference or nick name for the pointer and doesnot include in counting and dies after the object dies
#pragma endregion


*/

    auto_ptr<Rectangle> p1(new Rectangle(4,5));
    std::cout << p1.get()<<endl;
    auto_ptr<Rectangle> p2(p1);
    std::cout << p2.get() << endl;
    std::cout << p1.get() << endl;
    //std::cout << "Hello World!\n";
    std::cin.get();
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
