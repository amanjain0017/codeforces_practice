#include<bits/stdc++.h>
using namespace std;

int main(){
	int l, r;
	cin>>l>>r;
	
	int diff = r - l;
	if(diff >=1 or l%2==0)			cout<<2;
	else							cout<<l;
	
	
	return 0;
}