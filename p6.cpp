#include<bits/stdc++.h>
using namespace std;

vector<int> maxsum(vector<int> nums,int ** dp){
	vector<int> v;
	int len = nums.size();
	int maxsum = INT_MIN;
	int i1 = 0;
	int j1 = 0;
	for(int i =0;i<len;i++){
		for(int j=0;j<len;j++){
			if(i>j){
				dp[i][j] = -1;
				continue;
			}
			if(i==j){
				dp[i][j] = nums.at(i);
				if(maxsum < dp[i][j]){
					maxsum = dp[i][j];
					i1=i;
					j1=j;
				}
			}else{
				dp[i][j] = dp[i][j-1] + nums.at(j);
				if(maxsum < dp[i][j]){
					maxsum = dp[i][j];
					i1=i;
					j1=j;
				}
			}
		}
	}
	v.push_back(maxsum);
	v.push_back(i1);
	v.push_back(j1);
	return v;
}




int main(){
	vector<int> v;
	int N;cin>>N;
	for(int i=0;i<N;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	int ** dp = new int*[N];
	for(int i =0;i<N;i++){
		dp[i] = new int[N];
	}
	vector<int> ans = maxsum(v,dp);
	cout << "max sum is" << ans.at(0)<<endl;
	cout << "the sequence is: " << endl;
	for(int i = ans.at(1);i<= ans.at(2);i++){
		cout << v.at(i) << " ";
	}
	cout <<endl;
	for(int i =0;i<N;i++){
		for(int j= 0;j<N;j++){
			cout << dp[i][j] << " ";
		}
		cout <<endl;
	}
	return 0;
}