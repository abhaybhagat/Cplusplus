#include <iostream>
using namespace std;
void bubble_sort(int a[],int n) {
    for(int i=1;i<=n-1;i++) {
        for(int j = 0;j<=n-i-1;j++) {
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main() {
    int a[] = {5,4,1,3,2};
    int n = 5;
    bubble_sort(a,n);
    for(int i=0;i<5;i++) {
        cout<<a[i]<<", ";
    }

}
