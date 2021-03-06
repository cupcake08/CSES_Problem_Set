#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(string s,int startIdx){
        ll len=s.size();
        ll cnt=1,gc=1;
        for(int i=1;i<len;i++){
                if(s[i]==s[i-1]){
                        cnt++;
                }else{
                        gc=max(gc,cnt);
                        cnt=1;
                }
        }
        return max(gc,cnt);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    cout<<solve(s,0)<<'\n';
    return 0;
}
