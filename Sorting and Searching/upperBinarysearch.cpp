#include <iostream>
using namespace std;

int upperBinarySearch(int a[],int n,int key) {
    int s = 0, e = n-1;
    int mid,ans=-1;
    while(s<=e) {
        mid = (s+e)/2;
        if(a[mid]==key) {
            ans = mid;
            s = mid+1;
            
        }
        else if(a[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int a[] = {1,2,2,2,2,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int SearchIndex = upperBinarySearch(a,n,key);
    cout<<"Upper Bound of given element "<<SearchIndex<<endl;
    return 0;
    
}
