#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<int> vi;
typedef pair<int, int> pi;
ll node[200001][26], cnt[200001];
ll ans, k;
ll m = 1;
void dfs(ll idx = 0, ll height = 0)
{
    for (ll i = 0; i < 26; i++)
    {
        if (node[idx][i])
        {
            dfs(node[idx][i], height + 1);
            cnt[idx] += cnt[node[idx][i]];
        }
    }
    while (cnt[idx] >= k)
    {
        cnt[idx] -= k;
        ans += height;
    }
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
        ll n;
        cin >> n >> k;
        memset(node, 0, sizeof(node));
        memset(cnt, 0, sizeof(cnt));
        m = 1;
        ans = 0;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ll len = s.length();
            ll idx = 0;
            for (ll j = 0; j < len; j++)
            {
                if (!node[idx][s[j] - 'A'])
                {
                    node[idx][s[j] - 'A'] = m;
                    m++;
                }
                idx = node[idx][s[j] - 'A'];
            }
            cnt[idx]++;
        }
        dfs(0, 0);
        cout << "Case #" << g << ": " << ans << '\n';
        g++;
    }
    return 0;
}