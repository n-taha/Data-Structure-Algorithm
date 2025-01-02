#include<bits/stdc++.h>
using namespace std;
int main(){

   vector<int>v;
   cout << v.max_size() <<endl;
   cout << v.capacity()<<endl;

   v.push_back(10);
   v.push_back(10);
   v.push_back(30);

   cout << v.capacity() <<endl;

   v.clear();

   cout << v.size() <<endl;

   v.resize(10 , 100);
  cout << v.size() <<endl;
   cout << v[9];

   v.clear();







   return 0;
}