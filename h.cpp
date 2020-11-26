#include<iostream>
using namespace std;
long long a,b,m,k=0,x;
int mdc(long long a,long long b){
    return (b==0? a:mdc(b,a%b));
}
int main(){
    cin>>a>>b>>m;
    if(mdc(a,m)>1){
        cout<<"don't have";
        return 0;
    }
    while((m*k+b)%a!=0){
        k++;
    }
    x = (m*k+b)/a;
    cout<<x;
    return 0;
}