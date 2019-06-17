#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1000];
    int cs[1000];
    int left=-1,right=-1;
    int j,k;
    int maxSum=0,currentSum=0;
    cin>> a[0];
    cs[0] = a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        cs[i] = cs[i-1]  + a[i];
    }
    for(int i=0;i<n;i++){
        for(j=i;j<n;j++) {
            currentSum = cs[j]-cs[i-1];
            if(currentSum>maxSum) {
                maxSum = currentSum;
                left = i;
                right = j;
            }

        }
    }

    cout<<maxSum<<endl;
    for(k=left;k<=right;k++) {
        cout << a[k] <<",";
    }
    return 0;
}

