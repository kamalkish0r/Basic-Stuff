#include <bits/stdc++.h>
#define int long long
#define all(c) c.begin(), c.end()
using namespace std;

int mod = pow(10,9)+7;

int a[] = {16,8,10,15,20,30,50};
vector<int> heap;

void createHeap(){
    int n = heap.size();
    cout<<n<<"\n";
    for(int i=n-1;i>n/2;i--){
        int j = i;
        while(heap[j] > heap[(j-1)/2] && j >= 0){
            swap(heap[j],heap[(j-1)/2]);
            j = (j-1)/2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n";
}

void insertheap(int k){
    
    heap.push_back(k);
    createHeap();
    
}
int c = 0;
void Deleteheap(){
    c++;
    cout<<"after "<<c<<" delete heap.\n";
    int n = heap.size();
    n-=c;
    swap(heap.front(),heap[n]);
    int i = 0;
    while(heap[i] < max(heap[2*i+1], heap[2*i+2]) && i < (n-1)/2){
        if(heap[2*i+1] > heap[2*i+2]){
            swap(heap[i],heap[2*i+1]);
            i = 2*i+1;
        }
        else{
            swap(heap[i],heap[2*i+2]);
            i = 2*i+2;
        }
    }
    for(int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n";
}

void heapify(){//faster way to create heap
    int n = heap.size();
    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n";
    for(int i = n-1;i >= 0;i--){
        int j = 2*i + 1, k = i;
        if(j < n){
            while(heap[k] < max(heap[j], heap[j+1]) && j < n){
                if(heap[j] > heap[j+1]){
                    swap(heap[k], heap[j]);
                    k = j;
                    j = 2*j+1;
                }
                else{
                    swap(heap[k], heap[j+1]);
                    j++;
                    k = j;
                    j = 2*j + 1;
                    
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n";
}


signed main(){
    heap.clear();
    int n = sizeof(a)/8;
    cout<<n<<"\n";
    for(int i=0;i<n;i++){
        heap.push_back(a[i]);
    }
    mergeSort(a, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //heapify();
    //createHeap();
    //insertheap(60);
    n=8;
    //while(n--)
    //Deleteheap();
    return 0;
}
