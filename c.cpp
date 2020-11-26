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
int main(){
    long long q;
    cin>>q;
    fat(q);
    int  k = resp.size();
    for(int i=0;i<k-1;i++){
        cout<<resp[i]<<"*";
    }
    cout<<resp[k-1];
    return 0;
}