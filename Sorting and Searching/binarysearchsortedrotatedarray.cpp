#include <iostream>
using namespace std;
int search(int arr[],int s,int e,int key){
    if(s>e){
        return -1;
    }

    int mid = (s+e)/2;

    if(arr[mid]==key){
        return mid;
    }

    ///mid lies in first line in graph of sorted rotated array
        if(arr[s]<=arr[mid]){
            if(key>=arr[s]&&key<=arr[mid]){
                return search(arr,s,mid-1,key);
            }
            return search(arr,mid+1,e,key);
        }



    ///second line
    if(key>=arr[mid]&&key<=arr[e]){
            return search(arr,mid+1,e,key);

    }
    else{
        return search(arr,s,mid,key);
    }

}

int main() {
    int a[] = {5,6,7,1,2,3,4};
    int key;
    cin>>key;
    int s=0,e = 6;
    cout<<"Found at index "<<search(a,s,e,key);
    return 0;
}
