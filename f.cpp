#include <iostream>
#define ll long long 
using namespace std;
ll lol(ll a, ll b, ll &x, ll &y) {
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }
    ll x1, y1, mdc = lol(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return mdc;
}
int main(){
   ll a,b,x,y,mdc,mud=0;
   cin>>a>>b;
   if(a < b){//bora inverter?
       ll tmp = a;
       a = b;
       b = tmp;
       mud = 1;
   }
   mdc = lol(a, b, x, y);
   if(mud){//
       cout<<y<<" "<<x;//coeficientes 
   }else{
       cout<<x<<" "<<y;
   }
   return 0;
}
