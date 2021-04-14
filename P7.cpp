#include<bits/stdc++.h>
using namespace std;

int function1(int n,int * dp){
	if(n <= 9) return 1;

	if(dp[n] != -1){
		return dp[n];
	}

	int ans = INT_MAX;
	int p = n;
	while(p>0){
		int valueinit = p%10;
		if(valueinit == 0) {
			p /= 10;
			continue;
		}
		int tiger = function1(n-valueinit,dp);
		if(tiger < ans){
			ans = tiger;
		}		
		p /= 10;
	}
	return (dp[n] = ans+1); 
	// return ans+1;
}

void deeper(int n){
	int * dp = new int[n+1];
	for(int i =0;i<n+1;i++){
		if(i<=9){
			dp[i] = 1;
			continue;
		}
		dp[i] = INT_MAX;
	}
	for(int i = 10;i<=n;i++){
		int val = i;
		while(val>0){
			int party = val % 10;
			if(party == 0){
				val /=10;continue;
			}
			dp[i] = min(dp[i],1+dp[i-party]);
			val /= 10;
		}
	}
	cout <<dp[n]<<endl;
	for(int i =0;i<n+1;i++){
		cout <<dp[i] << " " ;
	}
	cout << endl;

}
int main(){
	int n;cin>>n;
	int * dp = new int[n+1];
	for(int i =0;i<n+1;i++){
		if(i<=9){
			dp[i] = 1;
			continue;
		}
		dp[i] = -1;
	}

	cout << function1(n,dp) << endl;
	for(int i =0;i<n+1;i++){
		cout <<dp[i] << " " ;
	}
	cout << endl;
	deeper(n);
	return 0;
}