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
    int N , K ; cin >> N >> K;
	string s; cin >> s;

    char f = '*';
    int cou = 0;
    for (int i = 0;i<N;i++){
        if(s.at(i) == f){
            cou++;
        }else{
            if(cou == K){
                break;
            }
            cou = 0;
        }
    }
    if(cou == K){
        cout << "YES"<<endl;
    }else{
        cout << "NO"<<endl;
    }

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
    	solve();

	}
    return 0;
}


