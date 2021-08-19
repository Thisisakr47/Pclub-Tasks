#include <bits/stdc++.h>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vpi;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define all(v) v.begin(), v.end()
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))

#define mp make_pair
#define pb push_back
#define ff first
#define ss second

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define cases         \
    int test_case;    \
    cin >> test_case; \
    while (test_case--)

////////////////////////////////////////////////////////////////////////////////////

int main()
{
    fastio
    ll m = 1;
    for(int i=1; i<=20; i++){
        ll n = m*i;
        ll k = m*i - m;
        cout<<n<<" "<<k<<"\n";

        for(int j=0; j<n; j++){
            ll a = 200000;
            ll b = j*j + j;
            a += b;

            vi v(7);
            v[0] = a;
            for(int i=1; i<7; i++){
                v[i] = a%100;
                a += j;
            }

            for(auto i:v){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        m++;
    }
}