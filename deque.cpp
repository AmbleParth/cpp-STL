#include <iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;//initialization
    /*Operations that can be performed
        push_back : insert element from back
        push_front : insert element from front
        pop_back : delete element from back
        pop_front : delete element from front
        at : gives respective element at specific index
        erase : deletes element from a given range
        size : returns size of queue
        empty : returns whether deque is empty or not
    */
   d.push_back(1);
   d.push_front(2);
   //d.pop_front()

   cout<<"Print first index "<<d.at(1)<<endl;

   cout<<"Front"<<d.front()<<endl;
   cout<<"Back"<<d.back()<<endl;

   cout<<"Empty or not :"<<d.empty()<<endl;

   cout<<"Size of vector before clear"<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);//delete first element
   cout<<"Size of vector after clear"<<d.size()<<endl;

}