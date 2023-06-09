#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool isPowerOfTwo(int n)
{
    
    if (n == 0)
        return false;
 
  return ((n&(n-1))==0);
  
}
    int findPosition(int n) {
        if(isPowerOfTwo(n)){
            int count = 0;
            while(n>0){
                count++;
                int m =n ;
                if(m&1==1){
                    return count ;
                }
                n=n/2;
            }
        }
        else{
            return -1; 
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}