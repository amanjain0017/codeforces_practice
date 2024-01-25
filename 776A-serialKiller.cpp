#include<bits/stdc++.h>
using namespace std;

int main(){
    string v1, v2;
    cin>>v1>>v2;
    
    int n;
    cin>>n;
    
    cout<<v1<<" "<<v2<<endl;
    for(int i = 0; i<=n; i++){
    	string killed, replaced;
    	cin>>killed>>replaced;
    	
    	if(killed == v1)	v1 = replaced;
    	else				v2 = replaced;
    	
    	cout<<v1<<" "<<v2<<endl;
    	
    }
    
    return 0;
}