#include<bits/stdc++.h>
using namespace std;

string solve(string s){
	int i, n = s.size();
	
	for(i = 0; i<n; i++){
		if(s[i] == '1')
			break;
	}
	
	if(i == n)	return "no";
	
	int count = 0;
	for(int j = i+1; j<n; j++){
		if(s[j] == '0'){
			count++;
		}
	}
	
	if(count>=6)	return "yes";
	else			return "no";
}

int main(){
    string s;
    cin>>s;
    
    cout<<solve(s)<<endl;
    return 0;
}