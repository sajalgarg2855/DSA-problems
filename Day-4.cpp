//Day-4:

//Q1: Count Distinct Numbers on Board

//Code:
class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        return n-1;        
    }
};

// T.C.: O(1)
// S.C.: O(1)

//Q2: Chocolate Distribution Problem

//Code: 
class Solution {
    public:
      int findMinDiff(vector<int>& a, int m) {
          // code here
          vector<int>v;
          sort(a.begin(),a.end());
          int s=a[m-1]-a[0];
          int i=0;
          while(i<a.size()-m+1){
              v.clear();
              for(int j=i;j<m+i;j++){
                  v.push_back(a[j]);
              }
              if(s>v[m-1]-v[0]){
                  s=v[m-1]-v[0];
              }
              i++;
          }
          return s;
      }
  };

//   T.C.: O(N logN)
//   S.C.: O(1)

