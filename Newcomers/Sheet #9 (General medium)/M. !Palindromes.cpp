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
    string s;
    cin >> s;
    int arr[200]={0};
    for(int i=0; i<sz(s); i++)arr[s[i]]++;
    int c = 0;
    for (int i = 'a'; i <='z'; i++)
    {
        if (arr[i] > 0)
            c++;
    }
    for (int i = 0; i <sz(s); i++)
    {
        if (s[i] != s[sz(s) - i - 1])
        {
            cout << sz(s);
            return ;
        }
    }
    if (c == 1)
        cout << 0;
    else
        cout << sz(s) - 1;

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
