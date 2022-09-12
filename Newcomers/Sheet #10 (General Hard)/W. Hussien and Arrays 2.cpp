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


void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for(int i=0; i<n; i++){
        ll a;
        cin >> a;
        v.push_back(make_pair(a, i));
    }
    sort(all(v));
    vector<ll>l, r;
    ll mn = v[0].second, mx = v[n - 1].second;
    for(int i=0; i<n; i++) {
        if (v[i].second <= mn) {
            mn = v[i].second;

        }
        if (v[n - i - 1].second >= mx) {

            mx = v[n - i - 1].second;
        }
        l.push_back(mn);
        r.push_back(mx);
    }
    reverse(all(r));
    ll ans = 0;
    for(int i=0; i<n; i++) {
        ans = max(ans, r[i] - l[i]);
    }
    cout << ans;

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
