#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* p = &a; //p => is a pointer variable
    int** q = &p;// q => is a pointer to a pointer

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; // * is used for dereferencing => *p => 5
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;


    return 0;
}