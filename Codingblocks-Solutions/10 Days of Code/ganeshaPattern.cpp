#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pa(arr,n)		for (int i = 0; i < n; ++i) cout<<arr[i]<<" "
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void s_m_n()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void ganesha(int n) {
	int mid = n / 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((j == 0 && i <= mid) || (j == mid || (j > mid && i == 0)) || i == mid || (i == n - 1 && j <= mid) || (i >= mid && j == n - 1))
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}
void optimalganesha(int n) {
	int mid = (n + 1) / 2;
	//first component
	cout << "*";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << " ";
	for (int i = 1; i <= (n + 1) / 2; i++)
		cout << "*";
	cout << "\n";
	//second component
	for (int i = 1; i <= (n - 3) / 2; i++) {
		cout << "*";
		for (int i = 1; i <= (n - 3) / 2; i++)
			cout << " ";
		cout << "*";
		cout << "\n";
	}

	//third component
	for (int i = 1; i <= n; i++)
		cout << "*";
	cout << "\n";

	//forth component
	for (int i = 1; i <= (n - 3) / 2; i++) {
		//space
		for (int i = 1; i <= (n - 1) / 2; i++)
			cout << " ";
		//star
		cout << "*";
		//space
		for (int i = 1; i <= (n - 3) / 2; i++)
			cout << " ";
		//star
		cout << "*";
		cout << "\n";
	}

	//fifth component
	for (int i = 1; i <= (n + 1) / 2; i++)
		cout << "*";
	for (int i = 1; i <= (n - 3) / 2; i++)
		cout << " ";
	cout << "*";

}
int32_t main()
{
	s_m_n();
	int n;
	cin >> n;
	optimalganesha(n);
	return 0;
}