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
		set<string> s;
		for(int i=0; i<n; ++i) {
			string tmp;
			cin >> tmp;
			if(tmp=="easy-medium")
				tmp="medium";
			else if(tmp=="medium-hard")
				tmp="hard";
			s.insert(tmp);
		}
		cout << ((int)s.size()==5?"Yes":"No") << "\n";
	}
}
