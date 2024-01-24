#include<bits/stdc++.h>
using namespace std;

int solve(string s, int k){
	int n = s.size();
	if(k>n)		return -1;
	
	unordered_set<char> mySet;
	for(int i = 0; i<n; i++){
		mySet.insert(s[i]);
	}
	
	int uniq = mySet.size();
	
	if(uniq>=k)		return 0;
	else			return k-uniq;
}

int main(){
    string s;
    cin>>s;
    
    int k;
    cin>>k;
    
    if(solve(s, k) == -1)	cout<<"impossible";
    else					cout<<solve(s, k);
    
    return 0;
}