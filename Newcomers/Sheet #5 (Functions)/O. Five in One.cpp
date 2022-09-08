/*********************************************************
       "ولولا الأمل في بكرة إني ممكن اوصلك مكنتش اقدر اكمل"
***********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void OSAMA() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }
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
ll lcm(ll x, ll y) { return ((x / gcd(x, y)) * y); }
const int N = 2e5 + 5;
//===========================================================
//**************** THINK TWICE .. CODE ONCE ******************//
int primes(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)continue;
        bool ok=1;
        for(int j=2;j*j<=arr[i];j++){
            if(arr[i]%j==0){
                ok=0;
                break;
            }
        }
        if(ok)c++;
    }
    return c;
}
int pal(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        bool ok=1;
        string s=to_string(arr[i]);
        for(int j=0;j<sz(s)/2;j++){
            if(s[j]!=s[sz(s)-j-1]){
                ok=0;
                break;
            }
        }
        if(ok)c++;
    }
    return c;
}
int divisors(int arr[],int n){
    int mx=0,cnt=0;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0)c++;
        }
        if(c>cnt){
            mx=arr[i];
            cnt=c;

        }
        if(c==cnt&&mx<arr[i]){
            mx=arr[i];
        }

    }
    return mx;
}

void solve()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"The maximum number : "<<(*max_element(arr,arr+n))<<endl;
  cout<<"The minimum number : "<<(*min_element(arr,arr+n))<<endl;
  cout<<"The number of prime numbers : "<<primes(arr,n)<<endl;
  cout<<"The number of palindrome numbers : "<<pal(arr,n)<<endl;
  cout<<"The number that has the maximum number of divisors : "<<divisors(arr,n)<<endl;
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
