//abdul bari
#include <bits/stdc++.h>
#define int long long
#define all(c) c.begin(), c.end()
using namespace std;

int mod = pow(10,9)+7;

int partition(int a[], int l,int h){
    int pivot = a[l];
    int i = l, j = h;
    while(i < j){
        while(a[i] <= pivot && i < h) i++;
        while(a[j] > pivot && j > l) j--;
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[j],a[l]);
    return j;
}
void quicksort(int a[], int l, int h){
    if(l < h){
        int j = partition(a, l, h);
        quicksort(a, l, j);
        quicksort(a, j+1, h);
    }
}

signed main(){
    int a[] = {6,5,8,9,3,10,15,12,16};
    quicksort(a, 0, 8);
    for(int i=0;i<9;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
