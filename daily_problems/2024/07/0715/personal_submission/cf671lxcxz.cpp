#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef std::pair<double, int> pii;
#define N 300100
double cal(int x1, int y1, int x2, int y2)
{
    return sqrt(1.0 * (x1 - x2) * (x1 - x2) + 1.0*(y1 - y2) * (y1 - y2) );
}

signed main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int ax, ay, bx, by, tx, ty;
    cin >> ax >> ay >> bx >> by >> tx >> ty;
    int n;
    cin >> n;
    double ans = 0;
    vector<pii> a(n );
    vector<pii> b(n );
    vector<pii> c(n );
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        double dis = cal(l, r, tx, ty);
        a[i] = {cal(ax, ay, l, r) - dis, i};
        b[i] = {cal(bx, by, l, r) - dis, i};
        c[i] = {dis * 2, i};
        ans+=c[i].first;
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    double tmp = min(a[0].first, a[0].first);
    if (a[0].second == b[0].second)
        tmp = min(tmp, min(a[0].first + b[1].first, a[1].first + b[0].first));
    else
        tmp = min(tmp, a[0].first + b[0].first);
    cout << fixed << setprecision(12);
    cout << ans + tmp << endl;
    return 0;
}
