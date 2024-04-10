4. Createa class BCA_OOPSto: 

  

a. Initialize the member variables through default constructor and parameterized constructor 

  

b. Use this pointer atleast once inside member function to assign the values to member 

  

variables c. Display the values of member variables through a function whichis not a member of the class 

  

d. Copythedata of an object into another object 

  

e. Decrement the values of member variables by 2 if it contains a value between 0 to 10and decrement the value by 5 if in case the value is more than 10 

 

#~ 

#include <iostream> 

using namespace std; 

  

class BCA_OOPS { 

private: 

    int var1, var2; 

  

public: 

    BCA_OOPS() { 

        var1 = 0; 

        var2 = 0; 

    } 

  

    BCA_OOPS(int a, int b) { 

        var1 = a; 

        var2 = b; 

    } 

  

    void assignValues(int a, int b) { 

        this->var1 = a; 

        this->var2 = b; 

    } 

  

    void displayValues() { 

        cout << "Values: " << var1 << " " << var2 << endl; 

    } 

  

    void copyData(const BCA_OOPS& obj) { 

        this->var1 = obj.var1; 

        this->var2 = obj.var2; 

    } 

  

    void decrementValues() { 

        if (var1 >= 0 && var1 <= 10) { 

            var1 -= 2; 

        } else if (var1 > 10) { 

            var1 -= 5; 

        } 

  

        if (var2 >= 0 && var2 <= 10) { 

            var2 -= 2; 

        } else if (var2 > 10) { 

            var2 -= 5; 

        } 

    } 

}; 

  

int main() { 

    BCA_OOPS obj1; // Default constructor 

    obj1.displayValues(); 

  

    BCA_OOPS obj2(15, 5); // Parameterized constructor 

    obj2.displayValues(); 

  

    obj1.assignValues(8, 3); 

    obj1.displayValues(); 

  

    obj2.copyData(obj1); 

    obj2.displayValues(); 

  

    obj2.decrementValues(); 

    obj2.displayValues(); 

  

    return 0; 

} 
