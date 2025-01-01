#include<iostream>
#include<vector>
using namespace std;

// void changeA(int* ptr){ //pass by refrence using pointe rs
//     *ptr = 20;
// }

int main(){

    int arr[] = {1, 2, 3, 4, 5};

     int* ptr2; //100
     int* ptr1 = ptr2 + 2;

     cout << ptr1 - ptr2 << endl;
    

//    cout <<*arr << endl;     //1
//    cout <<*(arr+1) << endl; //2
//    cout <<*(arr+2) << endl; //3
//    cout <<*(arr+3) << endl; //4

    return 0;

        //--------------- Pass by refrence ----------

        // int a = 10;
        // changeA(&a);

        // cout <<"inside main fnx: " << a << endl; // 20

        // return 0;

    //----------- Qs. predict output ---------

//    int a = 5;
//    int* p = &a;
//    int** q = &p;

//    cout << *p << endl;
//    cout << *q << endl;

   //------------- Pointer and pointer to pointer --------------------------------

    // int a = 10;
    // int* ptr = &a;

    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;

} 