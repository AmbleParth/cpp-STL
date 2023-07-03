#include <iostream>
#include<vector>
using namespace std;
int main()
{
    //create a vector
    vector<int> v;
    //another way to create a vector
    vector<int> a(5,1);//initialize vector with of size 5 with 1 

    vector<int> last(a);//copy a in vector last
    /*Operations that can be performed
        size : print size
        capacity : print capacity
        push_back : push element
        pop_back : pop element
        at : gives respective element at specific index
        front : returns initial element
        back : returns last element
        clear : clears vector
        begin : get starting iterator
        empty : checks whether vector is empty
    */
   cout<<"Capacity of vector ->"<<v.capacity()<<endl;//Here capacity will be 0

   v.push_back(1);
   cout<<"Capacity of vector ->"<<v.capacity()<<endl;
   v.push_back(2);
   cout<<"Capacity of vector ->"<<v.capacity()<<endl;
   v.push_back(3);
   cout<<"Size of vector ->"<<v.size()<<endl;

   cout<<"Capacity of vector ->"<<v.capacity()<<endl;

   cout<<"Element at 2nd index :"<<v.at(2)<<endl;

   cout<<"Front"<<v.front()<<endl;
   cout<<"Back"<<v.back()<<endl;

   cout<<"Before pop_back :"<<endl;
   for(int i : v){
    cout<<i<<" ";
   }cout<<endl;

   v.pop_back();
   cout<<"After pop_back :"<<endl;
   for(int i : v){
    cout<<i<<" ";
   }cout<<endl;

    cout<<"Size of vector before clear"<<v.size()<<endl;
    v.clear();
     cout<<"Size of vector after clear"<<v.size()<<endl;

     cout<<"Empty or not :"<<v.empty()<<endl;


}