#include<iostream>
#include<time.h>
using namespace std;
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
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    bool goddontexist = true;
    long long int a = 2;
    time_t futur = time(NULL) + 61;
    while(goddontexist){
        if(time(NULL) > futur){
            break;
        }
        if(prime(a)){
            cout<<a<<" ";
        }
        a++;
    }
    return 0;
}
