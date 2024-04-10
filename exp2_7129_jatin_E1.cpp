2. Write aC++code, where Transport class is derived from Student class, create object of the Transport class to display the complete details of the students 

 Student 

void get() 

 string Name 

 int Age 

 string City 

 void display() 

 int academic fee 

 Transport 

 Introute 

Transport() 

 intbus fee 

 void show() 

 

#~  

  #include <iostream> 

#include <string> 

using namespace std; 

  

class Student { 

public: 

    string Name; 

    int Age; 

    string City; 

    int academicFee; 

  

    void get() { 

        cout << "Enter student name: "; 

        cin >> Name; 

        cout << "Enter student age: "; 

        cin >> Age; 

        cout << "Enter student city: "; 

        cin >> City; 

        cout << "Enter academic fee: "; 

        cin >> academicFee; 

    } 

  

    void display() { 

        cout << "Student Details:" << endl; 

        cout << "Name: " << Name << endl; 

        cout << "Age: " << Age << endl; 

        cout << "City: " << City << endl; 

        cout << "Academic Fee: $" << academicFee << endl; 

    } 

}; 

  

class Transport : public Student { 

public: 

    int route; 

    int busFee; 

  

    Transport() { 

        cout << "Enter transport route: "; 

        cin >> route; 

        cout << "Enter bus fee: "; 

        cin >> busFee; 

    } 

  

    void show() { 

        display(); // Calling the display function of the base class 

        cout << "Transport Details:" << endl; 

        cout << "Route: " << route << endl; 

        cout << "Bus Fee: $" << busFee << endl; 

    } 

}; 

  

int main() { 

    Transport studentTransport; 

    studentTransport.get(); 

    cout << endl; 

    studentTransport.show(); 

    return 0; 

} 
