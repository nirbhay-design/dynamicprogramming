#include<bits/stdc++.h>
using namespace std;

int longestcommonsub(string s1,string s2){
	if(s1.length() == 0 || s2.length()==0){
		return 0;
	}
	if(s1.at(0) == s2.at(0)){
		return 1 + longestcommonsub(s1.substr(1),s2.substr(1));
	}

	return max(longestcommonsub(s1.substr(1),s2),longestcommonsub(s1,s2.substr(1)));
}

int lcs(string s1,string s2,int ** dp){
	int len1 = s1.length();
	int len2 = s2.length();
	//initialization
	for(int i =0;i<=len1;i++){
		dp[i][0] = 0;
	}
	for(int i =0;i<=len2;i++){
		dp[0][i] = 0;
	}
	for(int i = 1;i<=len1;i++){
		for(int j = 1;j<=len2;j++){
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[len1][len2];
}

int main(){
	string s1,s2;
	cin>> s1>>s2;
	//cout << "the length of longest common subsequence is: " << longestcommonsub(a,b)<<endl;
	int ** dp= new int*[s1.length()+1];
	for(int i = 0;i<=s1.length();i++){
		dp[i] = new int[s2.length()+1];
	}
	cout << "the dp len of lcs is: " << lcs(s1,s2,dp)<<endl;
	cout << "the dp is: "<<endl; 

	for(int i = 0;i<=s1.length();i++){
		for(int j = 0;j<=s2.length();j++){
			cout << dp[i][j]<<" ";
		}
		cout << "\n" ;
	}
	return 0;
}


