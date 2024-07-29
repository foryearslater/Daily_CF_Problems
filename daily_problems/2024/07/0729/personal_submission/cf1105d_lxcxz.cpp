#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef std::pair<int,int>pii;
#define N 300100
int a[N],b[N];
int t;
signed main(){  
    std::ios::sync_with_stdio(false); 
    std::cin.tie(nullptr);   
    int n,m;
    cin>>n>>m;
    m--;
    //找最小的放两边
    int l=0,r=n-1;
    vector<int>ans(n);
    for(int i=1;i<n;i++){
        if (m >> (n - i - 1) & 1) ans[r --] = i;
        else ans[l++] = i;
    }
    ans[l] = n;
    for (auto &x: ans) cout << x << ' ';
    return 0 ;
}
