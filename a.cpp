#include<iostream>
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
    long long int n;
    cin>>n;
    if(prime(n)){
        cout<<"I'm a prime"<<endl;
    }else{
        cout<<"I'm not a prime"<<endl;
    }
    return 0;
}