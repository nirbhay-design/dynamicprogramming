#include<bits/stdc++.h>
using namespace std;




int main(){
	int n;cin>>n;
	vector<vector<int>> arr(n,vector<int>(n,0));
	for(int i =0;i<n;i++){
		for(int j = 0;j<n;j++){
			char ch;
			cin >> ch;
			arr[i][j] = (ch == '.') ? 1 : 0;
		}
	}
	int ** dp = new int*[n];
	for(int i =0;i<n;i++){
		dp[i] = new int[n];
		for(int j = 0;j<n;j++){
			dp[i][j] = 0;
		}
	}
	if(arr[n-1][n-1] == 1) dp[n-1][n-1] = 1;
	for(int i = n-2;i>=0;i--){
		if(arr[i][n-1] == 0) dp[i][n-1] = 0;
		else{
			dp[i][n-1] += dp[i+1][n-1];
		}
	}
	return 0;
}https://www.youtube.com/watch?v=b4qQzVPWkZQ
https://www.youtube.com/watch?v=CgmvAMiVKFE

https://www.mygreatlearning.com/blog/gridsearchcv/
https://www.jenkins.io/doc/pipeline/tour/getting-started/

software-engineering-essentialized
http://www.software-engineering-essentialized.com/slides

f=plt.figure()
f=sns.JointGrid(df5["x1"],df5["x2"],hue=df5["class"],palette=["red","blue"])
f.plot(sns.scatterplot,sns.histplot)
plt.show()

Your username is: nirbhaysharma1
Your password is: eapffcvr
nirbhay12345@