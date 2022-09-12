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
bool prime(ll y) {
    if (y == 1)return 0;
    for (size_t i = 2; i * i <= y; i++)
    {
        if (y % i == 0)return 0;
    }
    return 1;

}

void solve()
{
    int n, x;
    cin >> n >> x;
    ll arr[n];
    for(int i=0; i<n; i++)cin >> arr[i];
    for(int i=0; i<n; i++) {
        ll a;
        cin >>a;
        if (a == 1) {
            if (prime(arr[i])) {
                arr[i] %= 10;
                ll b = 5,c=3,d=x;
                while (d--) {
                    b = (b % 10 * b % 10) % 10;
                    c=(c % 10 * c % 10) % 10;
                }

                cout << (((arr[i] * b) % 10) * c) % 10<<" ";
            }
            else cout << "-1 ";
        }
        else {
            arr[i] %= 10;
            ll b = 2, c = 5, d = x;
            while (d--) {
                b = (b % 10 * b % 10) % 10;
                c = (c % 10 * c % 10) % 10;
            }
            cout << (((arr[i] * b) % 10) * c) % 10 << " ";
        }
    }


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
