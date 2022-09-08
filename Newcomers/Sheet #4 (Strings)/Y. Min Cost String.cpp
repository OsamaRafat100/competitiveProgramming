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
#define watch(x) cout << (#x) << " = " << x << endl
#define PI 3.14159265
ll gcd(ll x, ll y)
{
    return (!y) ? x : gcd(y, x % y);
}
ll lcm(ll x, ll y)
{
    return ((x / gcd(x, y)) * y);
}
const int N = 2e5 + 5;
//===========================================================

void solve()
{
    string s;
    cin>>s;
    ll frq[200]= {0},n=sz(s);
    for(int i='a'; i<='z'; i++)
    {
        cin>>frq[i];
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='?')
        {

                int x=-1;
                for(int j=i; j<n; j++)
                {
                    if(s[j]!='?')
                    {
                        x=j;
                        break;
                    }
                }
            if(x==-1){
                char mn;
                if(i==0)mn='a';
                else {
                    mn=s[i-1];
                    for(int j='a';j<='z';j++){
                        if(frq[mn]==frq[j]){
                            mn=j;break;
                        }
                    }
                }
                for(int j=i;j<n;j++){
                    if(s[j]!='?')break;
                    s[j]=mn;

                }
            }
            else if(i==0)
            {
                char mn='a',ch=s[x];
                for(int j='a'; j<='z'; j++)
                {
                    if(abs(frq[mn]-frq[ch])>abs(frq[j]-frq[ch])){
                        mn=j;
                    }
                }
               for(int j=i;j<n;j++){
                    if(s[j]!='?')break;
                    s[j]=mn;

                }

            }
            else{

                char mn='a',l=s[i-1],r=s[x];
                for(int j='a'; j<='z'; j++)
                {
                    if(abs(frq[mn]-frq[l])+abs(frq[mn]-frq[r])>abs(frq[j]-frq[l])+abs(frq[j]-frq[r])){
                        mn=j;
                    }
                }
                 for(int j=i;j<n;j++){
                    if(s[j]!='?')break;
                    s[j]=mn;

                }

            }

        }

    }
    ll ans=0;
    for(int i=0;i<n-1;i++){
        ans+=abs(frq[s[i]]-frq[s[i+1]]);
    }
    cout<<ans<<endl<<s;
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
