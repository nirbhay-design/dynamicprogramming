#include<bits/stdc++.h>
using namespace std;

int palinsubstring(string s,int ** dp){
	int len = s.length();
	int count = 0;
	for(int g = 0;g<len;g++){
		for(int i=0,j=g;j<len;i++,j++){
			if(i==j){
				dp[i][j] = 1;
				count++;
			}else if(j == i+1){
				if(s.at(i) == s.at(j)){
					dp[i][j] = 1;
					count++;
				}else{
					dp[i][j] = 0;
				}
			}else{
				if(s.at(i)== s.at(j) && dp[i+1][j-1] == 1){
					dp[i][j] = 1;
					count++;
				}else{
					dp[i][j] = 0;
				}
			}
		}
	}
	return count;
}



int main(){
	string s;
	cin >> s;
	int ** dp = new int*[s.length()];
	for(int i=0;i<s.length();i++){
		dp[i] = new int[s.length()];
	} 
	cout << "total palindromic substrings are :" << palinsubstring(s,dp)<<endl;
	for(int i =0;i<s.length();i++){
		for(int j = 0;j<s.length();j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

/*
int palinsubstring(string s,int ** dp){
	int len = s.length();
	int count = 0;
	for(int g = 0;g<len;g++){
		for(int i=0,j=g;j<len;i++,j++){
			if(g == 0){
				cout << "gap 0" <<endl;
				dp[i][j] = 1;
				count = max(count,g+1); 
			}else if(g == 1){
				if(s.at(i) == s.at(j)){
					cout << "gap 1"<<endl;
					dp[i][j] = 1;
					count = max(count,g+1);
				}else{
					dp[i][j] = 0;
				}
			}else{
				if(s.at(i) == s.at(j) && dp[i+1][j-1] == 1){
					dp[i][j] = 1;
					count = max(count,g+1);
				}else{
					dp[i][j] = 0;
				}
			}
		}
	}
	return count;
}
*/