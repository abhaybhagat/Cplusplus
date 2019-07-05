//elements repeat twice but two elements occur only once find that two elements
#include <iostream>
using namespace std;
void findUnique2(int *a,int n) {
    int res = 0;
    for(int i=0;i<n;i++){
        res = res^a[i];
    }
    //find right most set bit
    int i=0;
    int temp = res;
    while(temp>0){
        if(temp&1){
            break;
        }
        i++;
        temp=temp>>1;
    }
    int mask = 1<<i;
    int firstNo = 0;
    for(int i=0;i<n;i++){
        if((mask&a[i])!=0) {
            firstNo = firstNo^a[i];
        }
    }
    int secondNo = res^firstNo;
    cout<<firstNo<<endl;
    cout<<secondNo<<endl;
}
int main() {
    int a[]= {1,1,2,2,7,7,8,4,5,5,6,6};
    findUnique2(a,10);
}
