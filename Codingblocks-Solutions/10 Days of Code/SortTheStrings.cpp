#include<bits/stdc++.h>
using namespace std;
void s_m_n() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
struct Point {
	string key;
	string value;
};
bool mycmp1(Point x, Point y) {
	return stoi(x.value) < stoi(y.value);
}
bool mycmp2(Point x, Point y) {
	return x.value < y.value;
}
bool mycmp3(Point x, Point y) {
	return stoi(x.key) < stoi(y.key);
}
bool mycmp4(Point x, Point y) {
	return x.key < y.key;
}
bool mycmp5(Point x, Point y) {
	return stoi(x.value) > stoi(y.value);
}
bool mycmp6(Point x, Point y) {
	return x.value > y.value;
}
bool mycmp7(Point x, Point y) {
	return stoi(x.key) > stoi(y.key);
}
bool mycmp8(Point x, Point y) {
	return x.key > y.key;
}
int32_t main()
{
	s_m_n();
	int n;
	cin >> n;
	string *s = new string[n], s1;
	getline(cin, s1);
	for (int i = 0; i < n; i++)
	{
		getline(cin, s1);
		s[i] = s1;
		//cout << s[i] << "\n";
	}
	int i1;
	string opt, s2;
	cin >> i1 >> opt >> s2;
	Point p[n];
	for (int i = 0; i < n; i++)
	{
		auto it = find(s[i].begin(), s[i].end(), ' ');
		int pos = it - s[i].begin();
		p[i].key = s[i].substr(0, pos);
		p[i].value = s[i].substr(pos + 1);
	}
	if (i1 == 1 && opt == "false" && s2 == "numeric")
	{
		sort(p, p + n, mycmp3);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	if (i1 == 1 && opt == "false" && s2 == "lexicographic")
	{
		sort(p, p + n, mycmp4);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	if (i1 == 2 && opt == "false" && s2 == "numeric")
	{
		sort(p, p + n, mycmp1);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	if (i1 == 2 && opt == "false" && s2 == "lexicographic")
	{
		sort(p, p + n, mycmp2);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	if (i1 == 1 && opt == "true" && s2 == "numeric")
	{
		sort(p, p + n, mycmp5);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	if (i1 == 1 && opt == "true" && s2 == "lexicographic")
	{
		sort(p, p + n, mycmp6);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	if (i1 == 2 && opt == "true" && s2 == "numeric")
	{
		sort(p, p + n, mycmp7);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	if (i1 == 2 && opt == "true" && s2 == "lexicographic")
	{
		sort(p, p + n, mycmp8);
		for (auto x : p) {
			cout << x.key << " " << x.value << "\n";
		}
	}
	return 0;
}