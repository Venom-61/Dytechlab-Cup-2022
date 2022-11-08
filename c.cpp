#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Ela and Cricket

int x[3], y[3];

pair<int, int> centralSquare() {
  int a = (x[0] == x[1]) ? x[0] : x[2];
  int b = (y[0] == y[1]) ? y[0] : y[2];
  return {a, b};
}

void solve() {
    int n, u, v;
    cin >> n;
    for (int i=0; i<3; i++) 
        cin >> x[i] >> y[i];
    cin >> u >> v;

    int cx = centralSquare().first;
    int cy = centralSquare().second;

    if ((cx == 1 || cx == n) && (cy == 1 || cy == n)) { 
        cout << ((u == cx || v == cy) ? "YES\n" : "NO\n");
    } else {
        if ((cx + cy) % 2 == (u + v) % 2) {
          cout << (cx % 2 == u % 2 ? "YES\n" : "NO\n"); 
        } else { 
          cout << "YES\n"; 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
