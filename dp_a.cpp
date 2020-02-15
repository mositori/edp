#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i < (n); ++i)
 
template<class T> inline T chmax(T& a, const T b) { return a = (a < b) ? b : a; }
template<class T> inline T chmin(T& a, const T b) { return a = (a > b) ? b : a; }
constexpr int INFINT = (1 << 30) - 1;                    // 1.07x10^ 9
using namespace std;
 
int main() {
  int n; cin >> n;
  int h[n];
  int dp[n]; rep(i,n) dp[i] = INFINT;
  
  rep(i, n) cin >> h[i];
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for (int i = 2; i < n; ++i) {
  	chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  
  cout << dp[n-1] << endl;
}
