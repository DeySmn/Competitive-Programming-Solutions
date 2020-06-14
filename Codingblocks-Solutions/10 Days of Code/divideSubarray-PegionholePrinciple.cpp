#include<iostream>
#include<cstring>
using namespace std;
#define int 	long long
void s_m_n()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int a[1000005], fpre[1000005];
int32_t main()
{
	s_m_n();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		memset(fpre, 0, sizeof(fpre));
		fpre[0] = 1;
		int sum = 0;
		//read the input
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
			sum %= n;
			sum = (sum + n) % n;
			fpre[sum]++;
		}
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int m = fpre[i];
			ans += m * (m - 1) / 2;
		}
		cout << ans << "\n";
	}
	return 0;
}
