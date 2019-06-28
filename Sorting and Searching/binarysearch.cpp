#include <iostream>
using namespace std;

int binarySearch(int a[],int n,int key) {
    int s = 0, e = n-1;
    int mid;
    while(s<=e) {
        mid = (s+e)/2;
        if(a[mid]==key) {
            //element found
            return mid;
        }
        else if(a[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    int a[] = {1,3,5,10,12,15,17};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int SearchIndex = binarySearch(a,n,key);
    cout<<"Found at index "<<SearchIndex<<endl;
    return 0;
    
}
