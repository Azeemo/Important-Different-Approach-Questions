#include<bits/stdc++.h>
using namespace std;
int main(){
int number;
cin>>number;
vector<int> div;
  for(int i=1;i<sqrt(n);i++){
      if(n%i==0){
        div.push_back(i);
      if(i != n/i)                         // if 2 divides 8 then 2 is divisor
                                          /// if( 2 is not equal // to avoid repitition) to 8/2 = 4 then 4 also divides 8
      {
        div.push_back( n/i);
      }
      }
  }
  
  return 0 ;
}
