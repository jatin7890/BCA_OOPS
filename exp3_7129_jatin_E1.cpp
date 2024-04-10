3. Create a class Test which contains three member variables (all of integer types), two member functions get_data() and show_data(). Create three objects of the class to invoke the member functions where get_data() would be invoked by passing only one argument and the same function would be called by object-2 and object-3 by passing two and three arguments respectively. Display the values of all the objects through show_data(). 

 

#~  

 #include <iostream> 

using namespace std; 

  

class Test { 

private: 

    int var1, var2, var3; 

  

public: 

    void get_data(int a) { 

        var1 = a; 

    } 

  

    void get_data(int a, int b) { 

        var1 = a; 

        var2 = b; 

    } 

  

    void get_data(int a, int b, int c) { 

        var1 = a; 

        var2 = b; 

        var3 = c; 

    } 

  

    void show_data() { 

        cout << "Values: " << var1 << " " << var2 << " " << var3 << endl; 

    } 

}; 

  

int main() { 

    Test obj1, obj2, obj3; 

  

    obj1.get_data(10); 

    obj2.get_data(20, 30); 

    obj3.get_data(40, 50, 60); 

  

    cout << "Object 1: "; 

    obj1.show_data(); 

  

    cout << "Object 2: "; 

    obj2.show_data(); 

  

    cout << "Object 3: "; 

    obj3.show_data(); 

  

    return 0; 

} 
