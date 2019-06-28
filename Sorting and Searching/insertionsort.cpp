#include <iostream>
using namespace std;
void insertion_sort(int a[],int n) {
    int j;
    for(int i=1;i<n;i++) {
        int num = a[i];
        for(j=i-1;j>=0 && a[j]>num;j--) {
            a[j+1] = a[j];
        }
        a[j+1] = num;
    }
}
int main() {
    int a[] = {5,4,1,3,2};
    int n = 5;
    insertion_sort(a,n);
    for(int i=0;i<5;i++) {
        cout<<a[i]<<", ";
    }

}
