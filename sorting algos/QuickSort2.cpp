#include <bits/stdc++.h>
#define int long long
#define all(c) c.begin(), c.end()
using namespace std;

int mod = pow(10,9)+7;

int partition(int a[], int l,int h){
    int pivot = a[h];
    int i = l - 1;
    for(int j = l;j < h;j++){
        if(a[j] < pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quicksort(int a[], int l, int h){
    if(l < h){
        int pi = partition(a, l, h);
        quicksort(a, l, pi-1);
        quicksort(a, pi+1, h);
    }
}

signed main(){
    int a[] = {5,4,3,2,1};
    quicksort(a, 0, 4);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
