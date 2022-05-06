#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define sqr(a) a *a
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())

typedef pair<int, int> pair_int;

bool goDown(int x, int d)
{
    return x < d - x;
}

int solve()
{
    int n, d;
    cin >> n >> d;
    vector<vector<int>> arr;
    vector<int> tmp;
    int count = 0;
    for(int i = 0; i < n; i++){
        int k = 0;
        cin >> k;
        tmp.push_back(k);
    }
    for(int i = 0; i < n; i++){
        if(tmp[i] == 1){
            vector<int> tmp2;
            for(int j = i; i < tmp.size(); j++){
                if(tmp[j] != 1){
                    i = j;
                    break;
                }else{
                    tmp2.push_back(tmp[j]);
                } 
            }
            arr.push_back(tmp2);
        }else if(tmp[i] == 0){
            vector<int> tmp2;
            for(int j = i; i < tmp.size(); j++){
                if(tmp[j] != 0){
                    i = j;
                    break;
                }else{
                    tmp2.push_back(tmp[j]);
                } 
            }
            arr.push_back(tmp2);
        }
    }
    int l0 = 0;
    int l1 = 0;
    int count0 = 0;
    int count1 = 0;
    for(auto x : arr){
        if(x[0] == 0){
            count0++;
            if(x.size() >= l0)
                l0 = x.size();
        }
        else{
            count1++;
            if(x.size() >= l1)
                l1 += x.size();
        }
    }
    if(l1 >= l0){
        count = count1;
    }else{
        count = count0;
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 0;
    cin >> t;
    int count = 1;
    while (t--)
    {
        printf("Case #%d: %d\n", count, solve());
        count++;
    }
    return (0);
}
