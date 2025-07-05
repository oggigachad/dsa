#include <bits/stdc++.h>
using namespace std;

void bubblesort(string arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
        }
    }
}
void printarr(string arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=3;
    string arr[]={"apple","cat","banana"};
    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}
