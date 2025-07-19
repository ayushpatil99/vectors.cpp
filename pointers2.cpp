//pass by reference

#include<iostream>
using namespace std;


void change(int* ptr){
    *ptr = 20;
}

int main(){
    int a = 5;
    cout<<a<<endl;
    change(&a);
    cout<<a<<endl;

    return 0;
}





// pass by reference using alias

void change(int &b){
    b = 20;
}

int main(){
    int a = 5;
    cout<<a<<endl;
    change(a);
    cout<<a<<endl;

    return 0;
}