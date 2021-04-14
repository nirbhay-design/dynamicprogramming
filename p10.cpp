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

//shortest path
// https://leetcode.com/problems/sort-list/
bool issafe(vector<vector<int>> arr,int i,int j,vector<vector<bool>> vis){
    return i>=0 && j>=0 && i<arr.size() && j<arr.at(0).size() && arr[i][j] == 1 && !vis[i][j];
}

int shortest1(vector<vector<int>> arr,int i,int j,int x,int y,vector<vector<bool>> vis){
    if(!issafe(arr,i,j,vis)) return 1000000;
    if(i == x && j == y) return 0;

    vis[i][j] = true;
    int left = shortest1(arr,i,j-1,x,y,vis)+1;
    int bottom = shortest1(arr,i+1,j,x,y,vis)+1;
    int right = shortest1(arr,i,j+1,x,y,vis)+1;
    int top = shortest1(arr,i-1,j,x,y,vis)+1;
    vis[i][j] = false;//going back from the place;
    return min(min(left,right),min(top,bottom));
}
int shortestpath(vector<vector<int>> arr,int i,int j,int x,int y){
    vector<vector<bool>> visited(arr.size(),vector<bool>(arr.at(0).size(),false));
    return shortest1(arr,i,j,x,y,visited);

}

void solve(){
    int row,col ; cin >> row >> col;
    vector<vector<int>> v(row,vector<int>(col));
    forward(i,0,row){
        forward(j,0,col){
            cin>> v[i][j];
        }
    }
    cout << shortestpath(v,0,0,row-1,0);
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}