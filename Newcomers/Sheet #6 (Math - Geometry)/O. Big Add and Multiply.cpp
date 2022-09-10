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
string Add(string s, string a)
{
    string ss;
    int carry = 0, sum;
    for(int i=0; i<sz(s); i++)
    {
        if (i >= sz(a))  sum = (s[i] - '0') + carry;
        else  sum = (s[i] - '0') + (a[i] - '0') + carry;


        ss.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
    if (carry != 0)ss.push_back(carry + '0');
    reverse(all(ss));
    return ss;
}
string Multiply(string s,string a){
    string mul = "0";
    for(int i=0;i<sz(s);i++) {
        int carry = 0, sum = 0; string m = "";
        for(int j=0;j<i;j++) {
            m.push_back('0');
        }
        for(int j=0;j<sz(a);j++) {
            sum = (s[i] - '0') * (a[j] - '0') + carry;
            m.push_back((sum % 10) + '0');
            carry = sum / 10;
        }
        if (carry != 0)m.push_back(carry + '0');

        reverse(all(mul));
        if (sz(mul) < sz(m)) {
            swap(mul, m);
        }
        mul = Add(mul, m);
    }
   return mul;
}
void solve()
{
    string s, a = "9999";
    cin >> s;

    reverse(all(s));

    if (sz(s) < sz(a)) {
        swap(a, s);
    }
    cout << Add(s, a) << endl ;
    cout<<Multiply(s,a);

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
