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
    ll fib[55]={0,1};
    for(int i=2;i<=50;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i<=50;i++){
        if(i<=2){
            fib[i]=0;
        }
        else{
            bool prime=1;
            for(ll j=2;j*j<=fib[i];j++){
                if(fib[i]%j==0){
                    prime=0;
                    break;
                }
            }
            if(!prime)fib[i]=0;
        }
    }

    int n;
    cin>>n;
    while(n--){
        int x;cin>>x;
        x--;
        if(fib[x])cout<<"prime\n";
        else cout<<"not prime\n";
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
