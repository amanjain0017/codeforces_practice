#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
   string ans = "";
   for(int i = 0; i<n-1; i++){
		ans += "aa";	
		ans += "bb";	
   }
   
   string temp = ans.substr(0, n);
   cout<<temp<<endl;
    return 0;
}