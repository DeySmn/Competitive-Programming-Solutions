#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=n-i;space++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"#";
        cout<<"\n";
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
