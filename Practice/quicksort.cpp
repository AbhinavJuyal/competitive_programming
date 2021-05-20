#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int start, int end) {
    int j = start;
    int pivot = a[end];

    for(int i = start; i < end; i++) {
        if(a[i] < pivot) {
            swap(a[i], a[j]);
            j++;
        }
    }

    swap(a[j],a[end]);
    return j;    
}

void quickSort(vector<int> &a, int start, int end) {
    int p;
    if(start < end) {
        p = partition(a, start, end);
        quickSort(a,start,p-1);
        quickSort(a,p+1,end);
    }

}

int main() {
    vector<int> arr = {7,1,5,6,4,2,3,9};
    quickSort(arr,0,arr.size()-1);
    cout<<"sorted array as follows : \n";
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}