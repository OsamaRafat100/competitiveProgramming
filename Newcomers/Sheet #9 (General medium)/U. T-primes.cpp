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

        ll n; cin >> n;
        if (floor(sqrt(n)) == ceil(sqrt(n))&&n!=1)
        {
            n = sqrt(n);


            bool prime = 1;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0) {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;


}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main()
{
  //File();
  OSAMA();
  int t = 1;
  cin >> t;
  while (t--)
  {

    solve();
  }
}
