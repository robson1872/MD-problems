#include<bits/stdc++.h>
using namespace std;
long long x=0,mod[100100],r[100100],n,pro=1,modx[100100],modi[100100];
long long mdc(long long a,long long b){
    return (b==0? a:mdc(b,a%b));
}
long long inv(long long a,long long b ){
    if(mdc(a,b)>1){
        return 0;
    }
    long long k=0;
    while((b*k+1)%a!=0){
        k++;
    }
    return (b*k+1)/a;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>r[i];//x %=r[i] mod (mod[i])
    }
    for(int i=1;i<=n;i++){
        cin>>mod[i];//os mod's
        pro*=mod[i];//produto dos moludos
    }
    for(int i=1;i<=n;i++){
        modx[i]=pro/mod[i];
    }
    for(int i=1;i<=n;i++){
        if(!inv(modx[i],mod[i])){
            cout<<"Nao sao coprimos";
            return 0;
        }
        modi[i] = inv(modx[i]%mod[i],mod[i]);
    }
    for(int i=1;i<=n;i++){
        x += r[i]*modx[i]*modi[i];
    }
    x%=pro;
    cout<<pro<<"k + "<<x;
    return 0;
}
