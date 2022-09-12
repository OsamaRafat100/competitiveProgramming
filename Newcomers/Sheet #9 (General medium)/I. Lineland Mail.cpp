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
    int arr[n];
    for(int i=0;i<n;i++)cin >> arr[i];
    int l= arr[0], r = arr[n - 1];
   for(int i=0;i<n;i++){
        if (i == 0 )cout << abs(arr[i] - arr[i+ 1]) << " ";
        else if(i==n-1)cout <<(abs(arr[i] - arr[i - 1]))<< " ";
        else
        {
            cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i + 1] - arr[i])) << " ";
        }

        cout<<max(abs(arr[i] - l), abs(arr[i] - r)) << endl;
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
