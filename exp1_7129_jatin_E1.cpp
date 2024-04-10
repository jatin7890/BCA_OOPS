1. Referring to the code snippet, you have to write a code to multiply two matrices by using operator overloading, where matrix of object-1 should be multiplied with matrix of object-2 and store the product in object-3. 

  

#include <iostream> 

 using namespace std; 

 #define rows 3 

 #define cols 3 

 class demo( 

 private: 

 intA[rows][cols]; 

 public: 

voidget_data(){ 

 for (int i=0;i<rows;i++) 

 { 

 for(int j=0;j<cols;j++) 

 { 

 cin>>A[i][j]; 

 }  

} 

 } 

 void show_data(){ 

 for(int i=0;i<rows;i++) 

{ 

 for(int j=0;j<cols;j++) 

 { 

 cout<<A[i][j]<<"\t"; 

} 

 cout<<endl; 

 } 

 } 

 demo operator +(demo obj){ 

 demo temp; 

 for(int i=0;i<rows;i++) 

 { 

 for(int j=0;j<cols;j++) 

 ( 

 temp.A[i][j]=A[i][j]+obj.A[i][j]: 

 } 

} 

 retumtemp, 

 } 

 ); 

 int main(){ 

 demo d1,d2,d3; 

 cout<<"Enter data for first matrix.."<<endl; 

 d1.get_data(); 

 cout<<"Enter data for second matrix.."<<endl; 

 d2.get_data(); 

 cout<<"Firstmatrix.."<<endl; 

 d1.show_data(); 

 cout<<"second matrix.."<<endl; 

 d2.show_data(); 

 d3=d1+d2; 

 cout<<"third matrix.."<<endl; 

d3.show_data(); 

} 

 

#~   

#include <iostream>  

using namespace std;  

#define rows 3  

#define cols 3  

 class demo{ 

private:  

    int A[rows][cols];  

 public:  

    void get_data(){  

        for (int i=0; i<rows; i++){  

            for(int j=0; j<cols; j++){  

                cin >> A[i][j];  

            }  

        }  

    }  

   void show_data(){  

        for(int i=0; i<rows; i++){  

            for(int j=0; j<cols; j++){  

                cout << A[i][j] << "\t";  

            }  

            cout << endl;  

        }  

    }  

  

    demo operator *(demo obj){ 

        demo temp; 

        for(int i=0; i<rows; i++){  

            for(int j=0; j<cols; j++){  

                temp.A[i][j] = 0; 

                for(int k=0; k<cols; k++){ 

                    temp.A[i][j] += A[i][k] * obj.A[k][j]; 

                } 

            }  

        } 

        return temp;  

    }  

};  

 int main(){  

    demo d1, d2, d3;  

     cout << "Enter data for first matrix:" << endl;  

    d1.get_data();  

    cout << "Enter data for second matrix:" << endl;  

    d2.get_data();  

    cout << "First matrix:" << endl;  

    d1.show_data();  

   cout << "Second matrix:" << endl;  

    d2.show_data();  

  

    d3 = d1 * d2;  

   cout << "Result of matrix multiplication:" << endl;  

    d3.show_data();  

   return 0;  

} 

 

