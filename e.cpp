#include<iostream>
#include<algorithm>
using namespace std;
long long x,y;
int mdc(long long a,long long b){
    return (b==0? a:mdc(b,a%b));
}
int main(){
    cin>>x>>y;
    cout<<mdc(x,y);
    return 0;
}