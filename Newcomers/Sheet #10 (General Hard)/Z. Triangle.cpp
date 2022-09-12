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

double x[3] , y[3] ;
bool fun(){
    double a = (pow(x[0] - x[1] , 2) + pow(y[0] - y[1] , 2)) ;
    double b = (pow(x[0] - x[2] , 2) + pow(y[0] - y[2] , 2)) ;
    double c = (pow(x[1] - x[2] , 2) + pow(y[1] - y[2] , 2)) ;
    double mx = max({a , b , c}) ;
    double mn = min({a , b , c}) ;
    double mid = a + b + c - mx - mn ;
    if(mx == mn + mid  && mx != 0 && mn != 0 && mid != 0){
        return true ;
    }
    return false ;
}
void solve(){
    for(int i = 0 ; i < 3 ; i++){
        cin >> x[i] >> y[i] ;
    }
    if(fun()){
        cout << "RIGHT" ;
        return ;
    }
    for(int i = 0 ; i < 3 ; i++){
        x[i]++ ;
        if(fun()){
            cout << "ALMOST" ;
            return ;
        }
        x[i]-= 2;
        if(fun()){
            cout << "ALMOST" ;
            return ;
        }
        x[i]++ ;
        y[i]++ ;
        if(fun()){
            cout << "ALMOST" ;
            return ;
        }
        y[i] -= 2 ;
        if(fun()){
            cout << "ALMOST" ;
            return ;
        }
        y[i]++ ;
    }
    cout << "NEITHER" ;
    return ;
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
