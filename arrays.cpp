#include <iostream>
#include<array>
using namespace std;
int main()
{
    int arr[3] = {1,2,3};//basic static array

    /*To create an STL array we use the following syntax*/

    array<int,4> a = {1,2,3,4};

    /*Operations that can be performed
    (1)size
    (2)at
    (3)empty
    (4)front
    (5)back
    */

    int size = a.size();
    for(int i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }
    cout<<"Size is "<<a.size()<<endl;

    cout<<"Element at 2nd index :"<<a.at(2)<<endl;

    cout<<"Empty or not :"<<a.empty()<<endl;

    cout<<"First element :"<<a.front()<<endl;

    cout<<"Last element :"<<a.back()<<endl;

}