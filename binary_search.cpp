#include <bits/stdc++.h>
#define int long long
#define all(c) c.begin(), c.end()
using namespace std;

int mod = pow(10,9)+7;

int binary_search(int a[], int n,int k){
    int mid, low = 0, high = n;
    while(low <= high){
        mid = (low+high)/2;
        if(a[mid] == k) return mid;
        if(a[mid] > k){
            high = mid-1;
        }
        else if(a[mid] < k){
            low = mid+1;
        }
    }
    return -1;
}

signed main(){
    int a[] = {16,8,10,15,20,30,50};
    int n = sizeof(a)/8;
    int k = 30;
    int i = binary_search(a,n,k);
    cout<<i<<endl;
    return 0;
}
