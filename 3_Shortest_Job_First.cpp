
class Solution {
  public:
    long long solve(vector<int>& bt) {
     sort(bt.begin(), bt.end());
        long long ans = 0;
        long long wait = 0;
        for(int i=0;i<bt.size()-1;i++){
            wait += bt[i];
            ans += wait;
        }
        return floor(ans/bt.size());
    }
};
