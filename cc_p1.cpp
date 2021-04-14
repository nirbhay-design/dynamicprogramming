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
float record = (float) 9.58;
void solve(){
	float k,K,kk,v; cin >> k >> K >> kk >> v;
	// string s = "";
	float vir = 100/(k*kk*K*v);
	float value = (int)(vir * 100 + .5);
	value = (float) value / 100;
	if(value >= record){
		// cout << value << endl;
		cout << "NO" << endl;
	}else{
		// cout << value << endl;
		cout << "YES" << endl;
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


