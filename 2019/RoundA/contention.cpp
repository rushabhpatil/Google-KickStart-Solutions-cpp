#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<int> vi;
typedef pair<int, int> pi;
ll cnt = 0;
vector<ll> tree;

ll dfs(ll node, ll start, ll end)
{
}

ll alloc(ll li, ll ri)
{
    cnt = 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    int g = 1;
    while (g <= t)
    {
        ll n, li, ri;
        cin >> n;
        tree.resize(2 * n + 2, 0);
        ll ans = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> li >> ri;
            ans = max(alloc(li, ri), ans);
        }

        cout << "Case #" << g << ": " << ans << '\n';
        g++;
    }
    return 0;
}