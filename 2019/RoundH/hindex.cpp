#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<ll> vll;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {

        ll n;
        cin >> n;
        ll tmp;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        cout << "Case #" << i << ": ";
        for (ll i = 0; i < n; i++)
        {
            cin >> tmp;
            pq.push(tmp);
            while (true)
            {
                ll tp = pq.top();
                if (tp < pq.size())
                {
                    pq.pop();
                }
                else
                {
                    break;
                }
            }
            cout << pq.size() << " ";
        }
        cout << endl;
    }

    return 0;
}