#include <iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;//initialization

    list<int> n(5,500);//Another way to initialize
    cout<<"Printing list :"<<endl;
    for(int i : n){
        cout<<i<<""<<endl;
    }
    /*Operations that can be performed
    push_back : insert element from back
    push_front : insert element from front
    begin : begining of list
    size : returns size of list
    end : ends list
    empty : returns whether list is empty or not
    erase : deletes element from a given range
    at : gives respective element at specific index
    */
   l.push_back(1);
   l.push_front(2);

   for(int i : l){
        cout<<i<<""<<endl;
    }
    l.erase(l.begin());
    for(int i : l){
        cout<<i<<"";
    }
    cout<<"Size is : "<<l.size()<<endl;
}
