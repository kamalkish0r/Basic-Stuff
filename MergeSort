#include <bits/stdc++.h>
#define int long long
#define all(c) c.begin(), c.end()
using namespace std;

int mod = pow(10,9)+7;

void merge(int a[], int l, int mid, int h){
    int n1 = mid - l + 1, n2 = h - mid;
    int ar[n1], br[n2];
    for(int i = 0; i < n1; i++){
        ar[i] = a[i+l];
    }
    for(int i = 0; i < n2; i++){
        br[i] = a[i+mid+1];
    }
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(ar[i] < br[j]){
            a[k] = ar[i];
            k++; i++;
        }
        else{
            a[k] = br[j];
            k++; j++;
        }
    }
    while(i < n1){
        a[k] = ar[i];
        k++; i++;
    }
    while(j < n2){
        a[k] = br[j];
        k++; j++;
    }
}

void mergeSort(int a[], int l,int h){
    if(l<h){
        int mid = (l+h)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, h);
        merge(a,l,mid,h);
    }
}

signed main(){
    
    return 0;
}

