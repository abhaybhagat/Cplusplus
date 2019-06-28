#include<iostream>
using namespace std;
void wave_sort(int a[],int n) {
    for(int i=0;i<n;i+=2) {
        if((i>0) && (a[i-1]>a[i])) {
            swap(a[i-1],a[i]);
        }
        if((i>0) && (a[i+1]>a[i])) {
            swap(a[i],a[i+1]);
        }
    }
}
int main() {
    int a[] = {5,4,1,3,2};
    int n = 5;
    wave_sort(a,n);
    for(int i=0;i<5;i++) {
        cout<<a[i]<<", ";
    }

}