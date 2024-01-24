#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<string> words(n);
    set< set<char> > s;
    
    for(int i = 0; i<n; i++){
    	cin>>words[i];
    }
    
    for(int i = 0; i<n; i++){
    	string word = words[i];
    	set<char> temp;
    	for(auto ch: word){
    		temp.insert(ch);
    	}
    	
    	s.insert(temp);
    }
    
    cout<<s.size()<<endl;
    
    return 0;
}