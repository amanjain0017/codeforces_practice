#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, h;
    cin>>w>>h;
    
    int u1, u2, d1, d2;
    cin>>u1>>d1>>u2>>d2;
    
    while(h!=0){
    	w+=h;
    	if(h == d1)		w-=u1;
    	if(h == d2)		w-=u2;
    	
    	if(w<0)			w = 0;
    	
    	h--;
    }
    cout<<w<<endl;
    return 0;
}