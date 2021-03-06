#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    vector<int> v(n-1);
    for(ll i=0;i<n-1;i++){
        cin>>v[i];
    }
    if(v.size()==1){
            if(v[0]==1){
                    cout<<2<<'\n';
            }else if(v[0]==2){
                    cout<<1<<'\n';
            }
            return 0;
    }
    sort(v.begin(),v.end());
    for(ll i=1;i<n;i++){
            if(abs(v[i-1]-v[i])!=1){
                cout<<v[i-1]+1<<'\n';
                return 0;
            }
    }
}
