#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(6);
   v.push_back(7);
   cout<<"Applying binary search :"<<binary_search(v.begin(),v.end(),6)<<endl;//binary search

   cout<<"Lower bound :"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;//lower bound

   cout<<"Upper bound :"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;//upper bound

   int a = 3;
   int b = 2;
   cout<<"Max"<<max(a,b);//FInd max
   cout<<"Min"<<min(a,b);//Find min
   swap(a,b);//Swap
   cout<<endl<<"a->"<<a<<endl;

   string abcd = "abcd";
   reverse(abcd.begin(),abcd.end());//Reverse
   cout<<"Reversed string"<<abcd<<endl;

   rotate(v.begin(),v.begin()+1,v.end());//rotate
   cout<<"After rotate :"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }
} 