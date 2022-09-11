/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}
void File()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
#endif
}
#define ll long long
#define all(v) (v).begin(), (v).end()
#define sz(n) int(n.size())
#define endl '\n'
//===========================================================
//**************** THINK TWICE .. CODE ONCE ******************//
ll n,x,arr[25];
bool solve(ll i, ll sum)
{
    if (i == n)
    {
        return sum == x;

    }
    if (solve(i + 1, sum + arr[i ]) || solve(i + 1, sum - arr[i]))
    {
        return 1;
    }
    return 0;


}
void solve()
{

    cin >> n >> x;
    for(int i=0; i<n; i++)cin >> arr[i];
    if (solve(1, arr[0]))cout << "YES";
    else cout << "NO";


}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main()
{
    //File();
    OSAMA();
    int t = 1;
    // cin >> t;
    while (t--)
    {

        solve();
    }
}
