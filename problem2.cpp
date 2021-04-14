#include<bits/stdc++.h>
using namespace std;
// UNIQUE COMBINATIONS;


long int get(int n,vector<long> c,int * dp){
    return 0;
}

long int getWays(int n, vector<long> c) {
    int * dp = new int[n+1];
    for(int i =0;i<=n;i++){
        dp[i] = -1;
    }
    dp[0] = 1;
    return get(n,c,dp);
    
}


int main(){
    int n,m;cin>>n>>m;
    vector<long> c;
    for(int i =0;i<m;i++){
        int a;
        cin >> a;
        c.push_back(a);
    }
    cout << getWays(n,c)<<endl;
    return 0;
}