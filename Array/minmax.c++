#include<iostream>
#include<limits.h>
using namespace std;

int setmini(int a[],int n){
    int mini = INT_MAX;
    for(int i = 0;i<=n;i++){
        if(a[i]<mini){
            mini = a[i];
        }
    }
    return mini;
}
int setmax(int a[],int n){
    int max = INT_MIN;
    for(int i = 0;i<=n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int main(){
    int a[]={2,3,4,5,1,6};
    int n = 6;

    cout<<"the minimum amount is: "<<setmini(a,n)<<endl;
    cout<<"the maximum amount is: "<<setmax(a,n)<<endl;
}