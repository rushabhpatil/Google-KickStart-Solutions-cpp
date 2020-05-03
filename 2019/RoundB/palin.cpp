#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<int> vi;
typedef pair<int, int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    int g = 1;
    while (g <= t)
    {
        ll n, q;
        cin >> n >> q;
        vector<vector<ll>> dp;
        vector<ll> vec(26, 0);
        dp.push_back(vec);
        string s;
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            vec[s[i] - 'A']++;
            dp.push_back(vec);
        }
        ll ans = 0;
        for (ll i = 0; i < q; i++)
        {
            ll li, ri;
            cin >> li >> ri;
            ll cnt = 0;
            for (ll j = 0; j < 26; j++)
            {
                if ((dp[ri][j] - dp[li - 1][j]) & 1)
                    cnt++;
            }
            if (cnt <= 1)
                ans++;
        }
        cout << "Case #" << g << ": " << ans << '\n';
        g++;
    }
    return 0;
}