/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }
void File(){
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
    int arr[n],frq[1005]={0};
    for(int i=0; i<n; i++){
        cin >> arr[i]; frq[arr[i]]++;
    }
    int mx = 0;
    for(int i=0; i<n; i++){
            mx = max(frq[arr[i]],mx);
    }

    if ((n % 2 == 0 && mx < n / 2+1) || (n % 2 != 0 && mx <= n / 2 + 1))cout << "YES";
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
