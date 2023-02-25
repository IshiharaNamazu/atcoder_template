#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// #define SOME_TESTCASE
// #define MOD 998244353LL

#if 1 // テンプレ折り畳み//テンプレ折り畳み//テンプレ折り畳み

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
  __vout(v)
#define dvvout(v)                                                                                                      \
  if (false)                                                                                                           \
  __vvout(v)
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)       // rep
#define repll(i, n) for (ll i = 0, i##_len = (ll)(n); i < i##_len; ++i)  // rep
#define repi(i, n1, n) for (int i = n1, i##_len = (n); i < i##_len; ++i) // rep
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)     // 自然数rep
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

#define dxout(x) dout << #x << ":" << x << _s // 変数デバッグ出力
#define dxoutln(x) dout << #x << ":" << x << _n
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

#define vecvec(v, n, m) vector<vector<int>> v(n, vector<int>(m));
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vc> vvc;
#define vin(v)                                                                                                         \
  for (auto &i : (v))                                                                                                  \
    cin >> i; // 配列入力
#define vvin(v)                                                                                                        \
  for (auto &i : (v))                                                                                                  \
    for (auto &j : i)                                                                                                  \
      cin >> j;
#define __vout(v)                                                                                                      \
  {                                                                                                                    \
    for (auto &i : (v)) {                                                                                              \
      cout << i << ' ';                                                                                                \
    }                                                                                                                  \
    cout << "\n";                                                                                                      \
  }
#define __vvout(v)                                                                                                     \
  {                                                                                                                    \
    for (auto &i : (v)) {                                                                                              \
      for (auto &j : i) {                                                                                              \
        cout << j << '\t';                                                                                             \
      }                                                                                                                \
      cout << "\n";                                                                                                    \
    }                                                                                                                  \
    cout << "\n";                                                                                                      \
  }

#define INF (INT_MAX / 3)
#define INFLL (LLONG_MAX / 3)

#ifndef MOD
#define MOD ((ll)(1e9 + 7))
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
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define _n "\n"
#define _n2 "\n\n"
#define _t "\t"
#define _s " "
#define _output dout << "output:";
#define _here dout << "here" << _n;

void test();

#endif // テンプレ折り畳み

//	LLONG_MAX 9.2*1e18	9223372036854775807LL = (2^63)-1
//	INT_MAX 2.1*1e9 2147483647 = (2^31)-1
//	O(1e8) 1.2sec

// fnc//fnc//fnc//fnc//fnc//fnc//fnc//fnc//fnc//fnc//fnc

// solve//solve//solve//solve//solve//solve//solve//solve
void solve() {
  int N;
  cin >> N;
  rep(i, N) { dout << "test" << _n; }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << std::fixed << std::setprecision(20);
#ifdef SOME_TESTCASE
  int t = 0;
  cin >> t;
  rep(i, t) solve();
#else
  solve();

#endif
  return 0;
}

void test() {}
