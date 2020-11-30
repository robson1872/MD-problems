#include <iostream>
#define ll long long 
using namespace std;
ll lol(ll a, ll b, ll &s, ll &t) {
    if(b == 0) {
       s = 1;
       t = 0;
       return a;
    }
    ll x1, y1, mdc = lol(b, a % b, x1, y1);
    s = y1;
    t = x1 - (a / b) * y1;
    return mdc;
}
int main(){
   ll a,b,s,t,mdc,mud=0;
   cin>>a>>b;
   if(a < b){//bora inverter?
       ll tmp = a;
       a = b;
       b = tmp;
       mud = 1;
   }
   mdc = lol(a, b, s, t);
   if(mud){//
       cout<<t<<" "<<s;//coeficientes 
   }else{
       cout<<s<<" "<<t;
   }
   return 0;
}
