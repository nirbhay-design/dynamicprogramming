#include<bits/stdc++.h>
using namespace std;

void subseq(string s,vector<string>& v){
	if(s.length() == 0){
		v.push_back("");
		return ;
	}

	subseq(s.substr(1),v);
	
	int a = v.size();
	for(int i = 0;i<a;i++){
		v.push_back(s.at(0) + v.at(i));
	}
	
	return;
}
// code for powerset



int main(){
	string s;
	cout << "enter the string: ";
	cin >> s;
	vector<string> ss;
	subseq(s,ss);
	for(int i =0 ;i<ss.size();i++){
		cout<< ss.at(i) << endl;
	}
	cout << "total strings are: " << ss.size() << endl;
	return 0;
}
