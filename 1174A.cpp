#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int sum = 0;
	vector<int> a(2*n);
	
	for(int i = 0; i<2*n; i++){
		cin>>a[i];
		sum += a[i];
	}
	
	sort(a.begin(), a.end());
	int halfSum = 0;
	for(int i = 0; i<n; i++){
		halfSum += a[i];
	}
	
	if(2*halfSum == sum)	cout<<-1;
	else{
		for(int i = 0; i<2*n; i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}