#include <bits/stdc++.h>
#define int long long
#define all(c) c.begin(), c.end()
using namespace std;

int mod = pow(10,9)+7;

int f[100];


int fib(int n){
    
    if(n <= 1) return n;
    if(f[n-1] == -1) f[n-1] = fib(n-1);
    if(f[n-2] == -1) f[n-2] = fib(n-2);
    return fib(n-1) + fib(n-2);
}

signed main()
 {
    //fibonacci series using dp
    //takes O(n) time
     int n;
     cin>>n;
     f[0] = 0;
     f[1] = 1;
     for(int i = 2;i<n;i++){
         f[i] = f[i-1] + f[i-2];
     }
     for(int i=0;i<n;i++) cout<<f[i]<<" ";
     cout<<"\n";
    // fibonacci series using memorisation
     for(int i=0;i<n;i++) f[i] = -1;
     fib(n);
     for(int i=0;i<n;i++) cout<<f[i]<<" ";
     cout<<"\n";
    return 0;
}
