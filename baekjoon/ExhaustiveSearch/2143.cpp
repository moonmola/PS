// PS 2143.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/1/20
/*
 * 두 배열의 합
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
    map<long long,long long> Map;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,m;
    cin >> t;
    cin >> n;
    vector<int> A(n);
    for(auto& i:A)  cin >> i;
    cin >> m;
    vector<int> B(m);
    for(auto& i : B) cin >> i;
    for(int i = 0; i < n; i++){
        long long temp = 0;
        for(int j = i; j < n; j++){
            temp += A[j];
            Map[temp]++;
        }
    }
    long ans = 0;
    for(int i = 0; i < m; i++){
        long long temp = 0;
        for(int j = i; j < m; j++){
            temp += B[j];
            ans += Map[t-temp];
        }
    }
    cout << ans;

}

/* upper, lowerbound 이용하는 방법 초도 메모리도 더 적게 먹는다
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define N 1003
#define M 1003
#define NN 600000
#define MM 600000

int main() {
    int n,m,i,j,ac=0,bc=0,pa,pb;
    long long t,a[N],b[M],sa[NN],sb[MM],ans=0, e,f;
    cin>>t>>n;
    a[0]=0, b[0]=0;
    for(i=1;i<=n;i++){
        cin>>a[i];
        a[i] = a[i]+a[i-1];
    }
    cin>>m;
    for(i=1;i<=m;i++){
        cin>>b[i];
        b[i] = b[i]+b[i-1];
    }

    for(i=1;i<=n;i++)
        for(j=0;j<i;j++){sa[ac]=a[i]-a[j]; ac++;}
    for(i=1;i<=m;i++)
        for(j=0;j<i;j++){sb[bc]=b[i]-b[j]; bc++;}
    sort(sa,sa+ac); sort(sb,sb+bc);

    pa=0, pb=bc-1;
    for (int i = 0; i < ac; i++){
        e = lower_bound(sb, sb+bc, t - sa[i]) - sb;
        f = upper_bound(sb, sb+bc, t - sa[i]) - sb;
        ans += f-e;
    }
    cout<<ans;


    return 0;
}*/
