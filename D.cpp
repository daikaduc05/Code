#include<bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef long double ld;


const ll NMAX = 1e9;
const ll N = 1e6;
const ll oo = 1e8;
const ll MOD = 998244353;

ll cont(ll u,ll v){
  while(u % 2 == 0 && v % 2 == 0){
    u /= 2;
    v /= 2;
  }
  if(u % 2 == 1 && v % 2 == 1){
    return 1;
  }
  if(u % 2 == 1 && v % 2 == 0){
    return 2;
  }
  return 3;
}
ll a[N + 10],b[N + 10];
void solve(){
  ll n;
  cin >> n;
  for(ll i = 1 ; i <= n ; i ++){
    cin >> a[i];
  }
  for(ll i = 1 ; i <= n ; i ++){
    cin >> b[i];
  }
  set<ll> k;
  for(ll i = 1 ; i <= n ; i ++){
    if(a[i] != 0 || b[i] != 0){
      k.insert(cont(a[i],b[i]));
    }
  }
  if(k.size() > 1) cout << "NO" << endl;
  else cout << "YES" << endl;
}  

int main (){
	ll test; 
    test=1;
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("D.inp", "r", stdin);
   freopen("D.out", "w", stdout);
#endif

  cin >> test;
    while(test--){
      solve();
    }
}
//()ư