#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

void solve(){
	int n;
	scanf("%d",&n);
	vector<int> v(n);
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	ll ans=0;
	for(int i=1;i<n;i++){
		if(v[i-1]>v[i]){
			ans+=(v[i-1]-v[i]);
			v[i] = v[i - 1];
		}
	}
	cout<<ans<<'\n';
}
int main(){
	solve();
	return 0;
}
