#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vecor can be defined using 3 methods

    //method 1:
    vector<int> vec;
    
    //method 2:
    vector<int> vec1={1,2,3};

    //method 3:
    vector<int> vec2(5,0);  //5->size of the vector
                           //0->value stored at each index of the vector

//let us now look at FOR EACH LOOP
for(int i : vec1){
    cout<<i<<" ";     // 1 2 3 
}

cout<<endl;

for(int i : vec2){
    cout<<i<<" ";     // 0 0 0 0 0
}

cout<<endl;
// FOR EACH LOOP used for characters:

vector<char> vec3={'a','b','c'};

for(char i: vec3){
    cout<<i<<" ";   // a b c
}



return 0;

}