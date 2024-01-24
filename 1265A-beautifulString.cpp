#include<bits/stdc++.h>
using namespace std;

string solve(string s){
	int n = s.size();
	
	//edge case
	// if(s[0] == )
	
	for(int i = 0; i<n; i++){
		if(s[i] == s[i+1] and s[i] != '?')	return "-1";
		
		if(s[i] == '?'){
			if(s[i-1] != 'a' and s[i+1]!='a')		s[i] = 'a';
			else if(s[i-1] != 'b' and s[i+1]!='b')	s[i] = 'b';
			else									s[i] = 'c';
		}
	}
	
	return s;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        cout<<solve(s)<<endl;
    }
    return 0;
}