#include <bits/stdc++.h>
using namespace std; 
 
int main() {
	int t, a ,b ,c;
	cin>>t;
	
	while(t--){
		cin>>a>>b>>c;
		
		int stones = 0;
		while(b>=1 and c>=2){
			stones += 3;
			b -= 1;
			c -= 2;
		}
		while(a>=1 and b>=2){
			stones += 3;
			a -= 1;
			b -= 2;
		}
		
		cout<<stones<<endl;
		
	}
 
	return 0;
}