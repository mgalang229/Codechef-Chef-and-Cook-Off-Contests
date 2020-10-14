#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		map<string, int> mp;
		mp["cakewalk"]=0, mp["simple"]=0, mp["easy"]=0,
		mp["easy-medium"]=0, mp["medium"]=0,
		mp["medium-hard"]=0, mp["hard"]=0;
		for(int i=0; i<n; ++i) {
			string tmp;
			cin >> tmp;
			mp[tmp]++;
		}
		bool ok=1;
		if(mp["easy-medium"]==0&&mp["medium"]==0)
			ok=0;
		if(mp["cakewalk"]==0||mp["simple"]==0||mp["easy"]==0)
			ok=0;
		if(mp["medium-hard"]==0&&mp["hard"]==0)
			ok=0;
		cout << (ok?"Yes":"No") << "\n";
	}
}
