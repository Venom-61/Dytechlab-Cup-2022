#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Ela Sorting Books

void solve() {
    int n, k;
    string str;
    cin >> n >> k >> str;
    vector<int> count_char(26, 0);

    for(char c : str) 
        count_char[c - 'a']++;

    string ans = "";

    for(int i = 0; i < min(25, n/k); i++) {
        while(k - ans.size() > count_char[i]) {
            ans.push_back(i + 'a');
        }
    }

    char c = 'a' + min(n/k, 25);
    while(k > ans.size()) {
        ans += c;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
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
