#include <bits/stdc++.h>
#define ll long long
using namespace std;
//! works but complexity sucks
bool checkPalindrome(const string &x)
{
    string rev = x;
    reverse(rev.begin(), rev.end());
    return x == rev;
}

bool solve(int n)
{
    string text[n];
    bool b = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> text[i];
        if (text[i][0] == text[i][text[i].length() - 1])
        {
            b = true;
        }
    }
    if (!b)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int k = i + 1; k < n; ++k)
            {
                if (checkPalindrome(text[i] + text[k]))
                {
                    b = true;
                    break;
                }
            }
        }
    }

    return (b);
}

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        if (solve(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return (0);
}