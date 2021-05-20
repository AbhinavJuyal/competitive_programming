#include <bits/stdc++.h>
using namespace std;

vector<int> auxarr;

void merge(vector<int> &a, int low, int mid, int high) {
    int l_idx = low;
    int r_idx = mid+1;
    int a_idx = low;
    int i;
    while(l_idx <= mid && r_idx <= high) {
        if(a[l_idx] <= a[r_idx]) {
            auxarr[a_idx++] = a[l_idx++];
        } else {
            auxarr[a_idx++] = a[r_idx++];
        }
    }

    if(l_idx <= mid) {
        for(i = l_idx; i <= mid; i++) {
            auxarr[a_idx++] = a[i];
        }
    } else {
        for(i = r_idx; i <= high; i++) {
            auxarr[a_idx++] = a[i];
        }
    }
    for(i = low; i <= high; i++) {
        a[i] = auxarr[i];
    }
}

void mergeSort(vector<int> &a, int low, int high) {
    int mid;
    if(low < high) {
        mid = (low + high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main() {
    vector<int> arr = {7,1,5,6,4,2,3,9};
    auxarr.resize(arr.size());
    mergeSort(arr,0,arr.size()-1);

    cout<<"Sorted array as follows: \n";
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}

