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
    cin>>n;
    vector<int>pro,math,pe;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1)pro.push_back((i+1));
        else if(x==2)math.push_back(i+1);
        else pe.push_back(i+1);
    }
    int teams=min({sz(pro),sz(math),sz(pe)});
    cout<<teams<<endl;
    while(teams--){
        cout<<pro.back()<<" "<<math.back()<<" "<<pe.back()<<endl;
        pro.pop_back(),math.pop_back(),pe.pop_back();
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
