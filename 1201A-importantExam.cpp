#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    
    vector<string> ans(n);
    for(int i = 0; i<n; i++)	cin>>ans[i];
    
    vector<int> points(m);
    for(int i = 0; i<m; i++)	cin>>points[i];
    
    vector<vector<int>> freq(m, vector<int>(5, 0));
    for(int i = 0; i<m; i++){
    	for(int j = 0; j<n; j++){
    		freq[i][ans[j][i] - 'A']++;
    	}
    }
    
    
    int totalPoints = 0;
    for(int i = 0; i<m; i++){
		int maxi = 0;
    	for(int j = 0; j<5; j++){
    		maxi = max(maxi, freq[i][j]);
    	}
    	
    	totalPoints += maxi*points[i];
    }
    
    cout<<totalPoints<<endl;
    return 0;
}