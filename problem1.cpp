#include<bits/stdc++.h>
using namespace std;

long int get(int n,vector<long>c,int * dp){
    if(n==0) return 1;
    
    if(dp[n] != -1){
        return dp[n];
    }
    int finala = 0;
    for(int i=0;i<c.size();i++){
        if(n-c.at(i) >=0){
            finala += get(n-c.at(i),c,dp);
        }
    }
    return (dp[n] = finala);

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