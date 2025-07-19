#include<iostream>
#include<vector>

using namespace std;

/*Vectors are same as arrays except :
1) Vectors are dynamic(execute at runtime) and Arrays are static(execute at compile time)
2)Vecors are stored in heap memory whereas Arrays are stored in stack memory
*/

int main(){
    vector<int> vec; //This occurs due to dynamic allocation of memory
    vec.push_back(1);//vec capacity->1
    vec.push_back(2);//1 * 2 vec capacity ->2
    vec.push_back(3);//2*2 vec capacity-> 4
    vec.push_back(4);//vec capacity -> 4
    vec.push_back(5);//4*2 vec capacity -> 8

    cout<<vec.size()<<endl; //5
    cout<<vec.capacity()<<endl; //8

    return 0;

}