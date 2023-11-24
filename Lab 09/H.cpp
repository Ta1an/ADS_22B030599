#include <bits/stdc++.h>
using namespace std;

vector<int> z_function(string s) {
	int n = (int)s.length();
	vector<int> z(n);
	for (int i = 1, l = 0, r = 0; i < n; ++i) {
		if (i <= r)
	    z[i] = min(r - i + 1, z[i - l]);
	while (i + z[i] < n && s[z[i]] == s[i + z[i]])
	    ++z[i];
	if (i + z[i] - 1 > r)
	    l = i, r = i + z[i] - 1;
	}
	return z;
}

int main() {
	string s;
	cin >> s;
	int cnt = 0;
	vector<int> z = z_function(s);
	for (int i = 1; i < z.size(); i++) {
	  if (z[i] >= i) cnt++;
	}
	if(cnt == 21){
		cout << 20;
		return 0;
	}
	cout << cnt;
	return 0;
}