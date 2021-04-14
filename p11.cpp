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



void printmap(unordered_map<int,int>& mp){
    for(pair<int,int> a:mp){
        cout << a.first << " " << a.second << endl;
    }
    cout << endl;
}
//https://www.youtube.com/watch?v=ObC-fyCA9IE
//https://www.youtube.com/watch?v=o2VfWU9EUtY
//https://www.youtube.com/watch?v=w7ejDZ8SWv8&t=1696s


/*
Mobile App Development 
Web App Development
Desktop App Development
API Development and testing
Browser Plugins
Cloud App Development 
*/
void solve(){
    // square matrix;
    // sudoku[i][j] 
    // i from 0 to len-1 j const
    // j from 0 to len-1 i const
    // if(sudoku[i][j] count != 1 ){
    //     choose a number to that is not in row and col and you have not used yet 
    // }then fill i+1 j, i-1 j, i j+1, i j-1;
    // condition 
    // backtraking 
    // we will move to previous change result and modify it backtracking 

}
//https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
//https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}


