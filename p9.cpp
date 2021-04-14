#include<bits/stdc++.h>
using namespace std;

#define repeat(n)            for(int i=0;i<n;i++)
#define PI                   3.14
#define forward(i,a,b)       for(int i = a;i<b;i++)
#define backward(i,a,b)      for(int i = a;i>b;i--)
#define pb                   push_back
#define pf                   push_front
#define ppb                  pop_back
#define ppf                  pop_front
#define pii                  pair<int,int>
#define Integer              long long int
#define Float                long long double
#define ll                   long long
int N = 1e7+10;

void solve(){
    int n;cin >> n;
    vector<int> dp(n+1,INT_MIN);
    dp[0] = 1;
    forward(i,1,n+1){
        forward(j,1,i+1){
            dp[i] = max(dp[i],j*dp[i-j]);
        }
    }
    cout << dp[n] << endl;
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}