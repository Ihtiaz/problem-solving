/// Problem link: codeforces.com/contest/1426/problem/D

#include <bits/stdc++.h>
#define ll long long int
#define pii pair <int,int>
#define ff first
#define ss second
#define pi acos(-1.0)
#define pb push_back
#define INF (ll)1e18
#define N 200002
#define MOD 1000000007
#define BASE 100003
const double EPS = 1e-9;
#define eq(a,b) (fabs(a-b)<EPS)

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;

template < class T > inline T gcd(T a, T b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
template < class T > inline T lcm(T a, T b) {return a/gcd(a, b)*b;}
inline int nxt() {int wow; scanf("%d", &wow); return wow;}
inline ll lxt() {ll wow; scanf("%lld", &wow); return wow;}
inline double dxt() {double wow; scanf("%lf", &wow); return wow;}
int bitXor(int x, int y){return ~( (x & y) | (~x & ~y) );}
template < class T > inline T bigmod(T p, T e, T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
/// send ll as arguments


/***************** Amakakeru Ryu No Hirameki *******************/

int main()
{
    //freopen("in.txt", "r", stdin);
    set <ll> mark;
    mark.insert(0);
    int n = nxt(), ans = 0;
    ll csum = 0;
    for (int i=0; i<n; i++) {
        ll x = lxt();
        csum += x;
        if (mark.find(csum) != mark.end()) {
            ans++;
            csum = x;
            mark.clear();
            mark.insert(0);
        }
        mark.insert(csum);
    }
    cout << ans << endl;
    return 0;
}
