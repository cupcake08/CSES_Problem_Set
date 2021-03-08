#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	if(n==1){
		cout<<n;
		return;
	}
	if(n==4){
		cout<<2<<" "<<4<<' '<<1<<" "<<3;
		return;
	}
	if(n<4){
		cout<<"NO SOLUTION";
		return;
	}
	for(int i=1;i<=n;i+=2){
		cout<<i<<" ";
	}
	for(int i=2;i<=n;i+=2){
		cout<<i<<' ';
	}
	cout<<'\n';
}
int main(){
	IOS
	solve();
	return 0;
}
