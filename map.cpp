//Map stores data in key value pairs.Each key is unique
#include <iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1] = "John";
    m[2] = "Doe";
    m[13] = "Harry";
    m.insert({5,"Wick"});

    for(auto i:m){
        cout<<i.first<<endl;
    }

    cout<<"Before erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(13);

    
    cout<<"After erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 ->"<<m.count(13)<<endl;
}

//operation time complexity= O(logn) as it uses red_black tree or balanced tree