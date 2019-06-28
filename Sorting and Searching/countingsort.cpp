#include<iostream>
using namespace std;
void counting_sort(int a[],int n) {
    int freq[10] = {0};
    for(int i=0;i<n;i++) {
        freq[a[i]]++;
    }
    for(int i=0;i<10;i++) {
        // cout<<freq[i]<<" ";
        while(freq[i]!=0) {
        freq[i]--;
        cout<<i<<", ";
        }
    }
}
int main() {
    int a[] = {3,5,2,6,1,4,3};
    int n = 7;
    counting_sort(a,n);
}