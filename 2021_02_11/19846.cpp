#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define all(v) (v).begin(),(v).end()
using pii = pair<int, int>;
using ll = long long;

const int MOD = 1e9 + 7, INF = 987654321;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };



int main() {
    cin.tie(nullptr); cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, m, q;
    cin >> n >> m >> q;
    string s;
    f(i, m) s.push_back((i / 2) % n + 'a');
    cout << s;
    return 0;
}