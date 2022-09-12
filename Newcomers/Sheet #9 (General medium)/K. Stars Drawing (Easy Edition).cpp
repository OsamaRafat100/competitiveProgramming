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
    int n, m;
    cin >> n >> m;
    char a[200][200], b[200][200];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    vector<ll>stars;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (a[i][j] == '*') {
                ll c , ans = 0;
                for(int k=1;k<=n;k++) {

                    if ((i + k < n && i - k >= 0 && j + k < m && j + k >= 0)&&(a[i + k][j] == '*' && a[i - k][j] == '*' && a[i][j + k] == '*' && a[i][j - k] == '*')) {

                            ans++;
                    }
                    else break;

                }
                if (ans >0) {


                        stars.push_back(i + 1);
                        stars.push_back(j + 1);
                        stars.push_back(ans);


                }



            }
        }
    }

    for (int l = 0; l < sz(stars); l+=3)
    {

        int i = stars[l] - 1,j=stars[l + 1]-1,k = stars[l+ 2];

        a[i][j] = '.';
        while (k>0)
        {
            a[i + k][j] = '.';
            a[i - k][j] = '.';
            a[i][j + k] = '.';
            a[i][j - k] = '.';
            k--;
        }
    }
   for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        {
            if (a[i][j] == '*')
            {
                cout << -1;
                return ;
            }
        }

    }
    cout << sz(stars) / 3 << endl;
    for (int l = 0; l < sz(stars); l += 3)
    {

        cout << stars[l] << " " << stars[l + 1] << " " << stars[l + 2] << endl;

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
