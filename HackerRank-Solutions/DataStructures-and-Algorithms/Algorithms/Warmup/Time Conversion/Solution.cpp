/*
problem- https://www.hackerrank.com/challenges/time-conversion/problem
*/
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string s1=s.substr(s.size()-2);
    int pos=s.find(":");
    string hh=s.substr(0,pos);
    string rest=s.substr(pos,s.size()-4);
    if(s1=="PM")
    {
        if(stoi(hh)<12)
            hh=to_string(stoi(hh)+12);
        else if(stoi(hh)>12)
            hh=to_string(12-stoi(hh));

    }
    else
    {
        if(stoi(hh)==12)
            hh="00";
    }
    string curr=hh+rest;
    // cerr<<curr;
    return curr;
        
        
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
