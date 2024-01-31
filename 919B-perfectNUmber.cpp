#include<bits/stdc++.h>
using namespace std;

int solve(int num){
	int sum = 0;
	while(num){
		sum += num%10;
		num = num/10;
	}
	return sum;
}

int main(){
    int k;
    cin>>k;
    
    int n = 18;
    while(k){
    	n++;
    	if(solve(n) == 10)	k--;
    }
    
    cout<<n;
    return 0;
}