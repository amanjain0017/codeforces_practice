#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    vector<int> a(n);
    for(int i = 0; i<n; i++)	cin>>a[i];
    
    int index = 0;
    while(index<(n/2)){
    	if(index%2==0)		swap(a[index],a[n-index-1]);
    	index++;
    }
    
    for(int i = 0; i<n; i++){
    	cout<<a[i]<<" ";
    }
    return 0;
}