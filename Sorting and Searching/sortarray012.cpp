#include <iostream>
using namespace std;
int main() {
    int a[] = {1,2,1,1,0,1,0,2,1};
    int n = sizeof(a)/sizeof(int);
    int lo=0,mid=0,hi = n-1;
    while(mid<=hi) {
        if(a[mid]==1) {
            mid++;
        }
        else if(a[mid]==2) {
            swap(a[mid],a[hi]);
            hi--;
        }
        else {
            swap(a[mid],a[lo]);
            mid++;
            lo++;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}
