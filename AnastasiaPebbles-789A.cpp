#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    
    vector<int> a(n);
    for(int i = 0; i<n; i++)	cin>>a[i];
    
    int days = 0;
    for(int i = 0; i<n; i++){
    	while(a[i] > k){
    		days++;
    		a[i] -= 2*k;
    	}
    }
    
    int count = 0;
    for(int i = 0; i<n; i++){
    	if(a[i]>0)	count++;
    }
    // cout<<days<<endl;
    
    days += (count + 1)/2;
    cout<<days<<endl;
    
    return 0;
}