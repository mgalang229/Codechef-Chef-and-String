#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;
char a[3*mxN];

void decode() {
	cin >> a;
	int cnt = 0; 
	for(int i = 0; i < (int)strlen(a); ++i) {
		if(a[i] == 'x' && a[i+1] == 'y') {
			cnt++;
			i++;
		}
		else if(a[i] == 'y' && a[i+1] == 'x') {
			cnt++;
			i++;
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
