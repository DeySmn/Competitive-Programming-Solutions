#include<bits/stdc++.h>
#include <utility>
using namespace std;
void s_m_n() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
string extractStringatKey(string s, int key)
{
	char *s1 = strtok((char *)s.c_str(), " ");
	while (key > 1)
	{
		s1 = strtok(NULL, " ");
		key--;
	}
	return (string)s1;
}
bool mycmp1(pair<string, string> a, pair<string, string> b)
{
	return stoi(a.second) < stoi(b.second);
}
bool mycmp2(pair<string, string> a, pair<string, string> b)
{
	return a.second < b.second;
}
int32_t main()
{
	s_m_n();
	int n;
	cin >> n;
	cin.get();//to extract the '\n' after n
	string s[1005];

	for (int i = 0; i < n; i++)
		getline(cin, s[i]);
	int key;
	cin >> key;
	string reversed, order;
	cin >> reversed >> order;
	pair<string, string> p[n];
	for (int i = 0; i < n; ++i)
	{
		p[i].first = s[i];
		p[i].second = extractStringatKey(s[i], key);
	}
	if (order == "numerical")
		sort(p, p + n, mycmp1);
	else
		sort(p, p + n, mycmp2);
	if (reversed == "true")
		for (int i = 0; i < n / 2; i++)
			swap(p[i], p[n - i - 1]);
	//output
	for (int i = 0; i < n; i++)
		cout << p[i].first << "\n";
	return 0;
}