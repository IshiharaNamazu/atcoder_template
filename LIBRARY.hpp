
#if 1 // テンプレ(lib用)
#include <bits/stdc++.h>
using namespace std;

#ifdef _DEBUG
#define debug() if (true)
#define dout cout
#define dvout(v) __vout(v)
#define dvvout(v) __vvout(v)
#else
#define debug() if (false)
#define dout                                                                                                           \
  if (false)                                                                                                           \
  cout
#define dvout(v)                                                                                                       \
  if (false)                                                                                                           \
  vout(v)
#define dvout(v)                                                                                                       \
  if (false)                                                                                                           \
  __vout(v)
#define dvvout(v)                                                                                                      \
  if (false)                                                                                                           \
  __vvout(v)
#endif

typedef long long ll;
typedef unsigned long long ull;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)   // rep
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i) // 自然数rep
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

#define _Yes                                                                                                           \
  {                                                                                                                    \
    cout << "Yes" << endl;                                                                                             \
    return;                                                                                                            \
  } // 出力
#define _No                                                                                                            \
  {                                                                                                                    \
    cout << "No" << endl;                                                                                              \
    return;                                                                                                            \
  }
#define _ans                                                                                                           \
  {                                                                                                                    \
    cout << ans << endl;                                                                                               \
    return;                                                                                                            \
  }
#define _endout(s)                                                                                                     \
  {                                                                                                                    \
    cout << (s) << endl;                                                                                               \
    return;                                                                                                            \
  }

#define vec(v, n) vector<int> v(n, 0); // 配列
#define vecll(v, n) vector<ll> v(n, 0);
#define vecvec(v, n, m) vector<vector<int>> v(n, vector<int>(m));
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
#define vin(v)                                                                                                         \
  for (auto &i : (v))                                                                                                  \
    cin >> i; // 配列入力
#define vvin(v)                                                                                                        \
  for (auto &i : (v))                                                                                                  \
    for (auto &j : i)                                                                                                  \
      cin >> j;
#define __vout(v)                                                                                                      \
  for (auto &i : (v)) {                                                                                                \
    cout << i << ' ';                                                                                                  \
  }                                                                                                                    \
  cout << "\n";
#define __vvout(v)                                                                                                     \
  for (auto &i : (v)) {                                                                                                \
    for (auto &j : i) {                                                                                                \
      cout << j << ' ';                                                                                                \
    }                                                                                                                  \
    cout << "\n";                                                                                                      \
  }                                                                                                                    \
  cout << "\n";

#ifndef MOD
#define MOD 1000000007LL // mod用定数 (ll)(1e9+7)
#endif
#define mod(n) (((ll)n) % MOD)
#define modp(n, p) (((ll)n) % (ll)(p))
#define modx(A, B) mod(mod(A) * mod(B))
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

#define next asdnext
#define prev asdprev
#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define SZ(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define _n "\n"
#define _n2 "\n\n"
#define _t "\t"

void test();

#endif // テンプレ折り畳み

// UNIONFIND//UNIONFIND//UNIONFIND//UNIONFIND//UNIONFIND//UNIONFIND//UNIONFIND
struct UNIONFIND {
  vector<int> par; // 親、親自身の場合集合の大きさ

  UNIONFIND(int N) : par(N, -1) {}

  int root(int x) {
    if (par[x] < 0)
      return x;
    return par[x] = root(par[x]);
  }

  bool unit(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y)
      return false;
    if (x > y)
      swap(x, y);     // 小さい方に合体させる
    par[x] += par[y]; // 集合xの大きさが負で代入される
    par[y] = x;
    return true;
  }

  bool same(int x, int y) { return root(x) == root(y); }
  int size(int x) { return -par[root(x)]; }
  int operator[](int x) { return root(x); }
  int operator()(int x) { return size(x); }
};
//

// 桁数//桁数//桁数//桁数//桁数//桁数//桁数//桁数//桁数//桁数//桁数
int num_of_digits(ll n) {
  if (n <= 0)
    return 0;
  int ret = 1;
  if (n >= static_cast<ll>(1e16))
    ret += 16, n /= static_cast<ll>(1e16);
  if (n >= static_cast<ll>(1e8))
    ret += 8, n /= static_cast<ll>(1e8);
  if (n >= static_cast<ll>(1e4))
    ret += 4, n /= static_cast<ll>(1e4);
  if (n >= static_cast<ll>(1e2))
    ret += 2, n /= static_cast<ll>(1e2);
  if (n >= static_cast<ll>(1e1))
    ret += 1, n /= static_cast<ll>(1e1);
  return ret;
}

// 二分探索//二分探索//二分探索//二分探索//二分探索//二分探索//二分探索
int binary_search(int key) {
  int ng = -1;            // a[0]を視野に
  int ok = (int)a.size(); // a.end()が条件を満たさない可能性
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (isOK(mid, key))
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}
//

// extgcd//extgcd//extgcd//extgcd//extgcd//extgcd//extgcd//extgcd
ll extgcd(ll a, ll b, ll &x, ll &y) {
  ll g = a, k = 0;
  if (b == 0)
    g = a, x = 1, y = 0;
  else
    g = extgcd(b, a % b, y, x), y -= (a / b) * x;
  return g;
}
//

// gcd c++17の標準ライブラリに存在している。gccに__gcd()アリ
template <class T> T _gcd(T a, T b) {
  if (a % b == 0)
    return b;
  else
    return _gcd(b, a % b); // ユークリッドの互除法
}
//

// 繰り返し二乗法//繰り返し二乗法//繰り返し二乗法//繰り返し二乗法//繰り返し二乗法//繰り返し二乗法
ll pow_mod(ll n, ll k, ll m) { // n^k (mod m)
  ll ans = 1;
  while (k > 0) {
    if (k & 1)
      ans = (ans * n) % m;
    n = n * n % m; // n^(2^i) のmodが入ってる
    k >>= 1;
  }
  return ans;
}
//

// 素因数分解//素因数分解//素因数分解//素因数分解//素因数分解//素因数分解//素因数分解//素因数分解
inline vector<pair<ll, ll>> get_prime_factor(ll N) {
  int K = N;
  vector<pair<ll, ll>> pns;
  for (ll i = 2; i * i <= K; i++) {
    int ans = 0;
    while (N % i == 0) {
      N = N / i;
      ans++;
    }
    if (ans != 0) {
      pns.push_back(std::make_pair(i, (ll)ans));
    }
  }
  if (N != 1)
    pns.push_back(std::make_pair(N, (ll)1));
  return pns;
}