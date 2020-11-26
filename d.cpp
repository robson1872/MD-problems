#include<iostream>
#include<vector>
using namespace std;
vector<long long int> resp;
bool prime(long long int n){
    if(n==0 or n==1){
        return false;
    }
    for(long long int i=2;i*i<=n;i++){
        if(!(n%i)){
            return false;
        }
    }
    return true;
}
void fat(long long int a){
    if(prime(a)){
        resp.push_back(a);
        return;
    }
    for(long long int i=2;i*i<=a;i++){
        if(prime(i) and !(a%i)){
            resp.push_back(i);
            fat(a/i);
            return;
        }
    }
    return;
}
int lista1[1000100],lista2[1000100];
int main(){
    long long a,b;
    cin>>a>>b;
    fat(a);
    int k = resp.size();
    for(int i=0;i<k;i++){
        lista1[i+1] = resp[i];
    }
    resp.clear();
    fat(b);
    int z = resp.size();
    for(int i=0;i<z;i++){
        lista2[i+1] = resp[i];
    }
    long long mdc=1,mmc=1;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=z;j++){
            if(lista1[i]==lista2[j]){
                mdc *= lista1[i];
            }
        }
    }
    mmc = a*b/mdc;
    cout<<mdc<<" "<<mmc;
    return 0;
}