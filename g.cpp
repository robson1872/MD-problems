#include<iostream>
using namespace std;
long long a,b,k=0,x;
int mdc(long long a,long long b){
    return (b==0? a:mdc(b,a%b));
}
int main(){
    cin>>a>>b;
    if(mdc(a,b)>1){
        cout<<"don't have";
        return 0;
    }
    while((b*k+1)%a!=0){
        k++;
    }
    x = (b*k+1)/a;
    cout<<x;
    return 0;
}