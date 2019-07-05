#include <iostream>
#include <cstring>
using namespace std;
int countBits(int n) {
    int count =0;
    while(n>0) {
        count+=(n&1);
        n = n>>1;
    }
    return count;
}
int countBitsFast(int n) {
    int count = 0;
    while(n) {
        count++;
        n = n & (n-1);
    }
    return count;
}
//1<<i shift 1 i bits to the left
int getithBit(int n,int i) {
    return (n&(1<<i))!=0?1:0;
}
void setithbit(int &n,int i) {
    int mask = (1<<i);
    n = (n|mask);
}
void clearBit(int &n,int i) {
    int mask = ~(1<<i);
    cout<<mask<<" "<<n<<endl;
    // 0001 get changed to 0100 if i is 2 and then to 1011 due to negation
    n = n& mask;
}
void filterChars(char *a,int no) {
    //eg.no = 5 out ac of abc as 5 = 101
    int i = 0;
    while(no>0) {
        (no&1)?cout<<a[i]:cout<<"";
        i++;
        no = no>>1; 
    }
    cout<<" ";
}
void generateSubsets(char *a) {
    //generate raanfe of numbers from 0 to 2^n-1
    int n = strlen(a);
    int range = (1<<n)-1;
    for(int i=0;i<=range;i++) {
        filterChars(a,i);
    }
}

int main() {
    char a[] = {'a','b','c'};
    generateSubsets(a);
}
