#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string word;
        cin>>word;

        int ans = 0;
        for(int i = n-1; i>=0; i--){
            int temp = 0;
            while(i>=0 and word[i] == 'P'){
                temp++;
                i--;
            }
            
            if(word[i] == 'A')
            	ans = max(ans, temp);
        }

        cout<<ans<<endl;
    }
    return 0;
}