#include <iostream>
using namespace std;
void selection_sort(int a[],int n) {
    for(int i=0;i<n-1;i++) {
        int minIndex = i;
        for(int j = i+1;j<n;j++) {
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[minIndex],a[i]);
    }
}
int main() {
    int a[] = {5,4,1,3,2};
    int n = 5;
    selection_sort(a,n);
    for(int i=0;i<5;i++) {
        cout<<a[i]<<", ";
    }

}
