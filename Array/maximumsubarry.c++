#include<iostream>
using namespace std;

int maxsubary(int n[],int s){
    int st=0,e=s-1;
    int maxi = n[0];
    int sum = 0;

    
        for(int i = 0;i<s;i++){
        sum +=n[i];
        maxi = max(sum,maxi);
        if(sum<0){
            sum = 0;
        }
    }
    
    return maxi;
}

int main(){
    int nums[] = {5,4,-1,7,8};
    int s = 5;
    cout<<"the maxi mum value is "<<maxsubary(nums,s)<<endl;
}