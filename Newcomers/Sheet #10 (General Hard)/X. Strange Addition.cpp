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
    int arr[5]={0};
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x == 0)arr[0] = 1;
        else if (x == 100)arr[1] = 1;
        else if (x < 10)arr[2] = x;
        else if (x % 10 == 0)arr[3] = x;
        else arr[4] = x;
    }
    vector<int>s;
    if (arr[0])s.push_back(0);
    if (arr[1])s.push_back(100);
    if (arr[2] != 0)s.push_back(arr[2]);
    if (arr[3] != 0)s.push_back(arr[3]);
    if (!arr[2] && !arr[3] && arr[4])s.push_back(arr[4]);
    cout << sz(s)<<endl;
    for(int i=0; i<sz(s); i++)cout<<s[i] << " ";

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
