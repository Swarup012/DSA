#include<iostream>
using namespace std;

int reverse(int a[],int n){
    int s = 0;
    int e = n-1;
    
    while(s<=e){
        swap(a[s++],a[e--]);
    }
}

int printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[]={2,5,3,6,8,7};
    int n=sizeof(a)/sizeof(a[0]);
    reverse(a,n);
    printArray(a,n);
}

