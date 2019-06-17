#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1000];
    int j,k;
    int maxSum=0,currentSum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(j=i;j<n;j++) {
            currentSum = 0;
            for(k=i;k<=j;k++) {
                currentSum += a[k];
            }
            if(currentSum>maxSum) {
                maxSum = currentSum;
            }
        }
    }
    cout<<maxSum<<endl;
    return 0;
}

