#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) {
        int ans=0;
        int temp=n;
        while(n!=0){
            n=n&(n-1);
            ans++;
        }
        if(ans==0)
        return -1;
    if(ans>1)
    return -1;
    int count=0;
    while(temp!=0)
    {
        temp=temp>>1;
        count++;
    }
        return count;
    }

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;
