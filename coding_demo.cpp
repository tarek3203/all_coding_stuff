                        
                        /****************************************************************/
                        /****************************************************************/
                        /**                                                            **/
                        /**                  BISMILLAHIR RAHMANIR RAHIM                **/
                        /**                ENLIVEN___BOY___TAREK   NEWBIE              **/ 
                        /**              MANARAT__lNTERNATIONAL__UNIVERSITY            **/
                        /**       DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING       **/
                        /**     INSHA-ALLAH  I WILL BE ABLE TO CONFIRM MY DREAM JOB    **/
                        /**                                                            **/
                        /****************************************************************/
                        /****************************************************************/
                        
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define w(aa) ll tc;cin>>tc;while(tc--)
const ll N = 10000001;
/*ll abs(ll x){
    return (x>0?x:-x);
}*/
/*  
    ll a=6;
    ll *p=&a;
    ll **q=&p;
    ll ***r=&q;
    cout<<*p<<endl;//6
    cout<<*q<<endl;//address of a or value of p
    cout<<*(*q)<<endl;//6
    cout<<*r<<endl;//address of p or value of q
    cout<<**r<<endl;//address of a or value of p
    cout<<***r<<endl;//6
*/
/*
   &a[i] or a+i 
   a[i] or *(a+i)
*/   
/*
      string s,s1;
      s.assign(n,'a');
      s1.assign(n,'b');
      sort(a+1,a+1+n);
      sort(v.begin()+1,v.end()+n+1);//vector<ll>v(n+1)
*/
/*
   x=s[i]-'0'; if i need to get an lleger from a character.
   x='0'+s[i]; if i need to get a character from an lleger.
*/
/*
    const ll *p or ll const *p    //p++ is valid    //(*p)++ is invalid.
    ll *const p   //p++ is invalid // (*p)++ is valid.
*/
//scanf(" %c",&ch);
ll prime(ll pp){
    for(ll i=2;i*i<=pp;i++){
        if(pp%i==0)return false;
    }
    return true;
}
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}

ll X_OR(ll n){// this is the sum of getting x_or operation
    if(n%4==0)return n;
    else if(n%4==1)return 1;
    else if(n%4==2)return n+1;
    return 0;
}
// vector<string>v(n,(n,'+'));
// A (X_OR) B = C OR A (X_OR) C = B ..
//A quadrilateral can be built when max(a,b,c,d)<a+b+c+d−max(a,b,c,d)..
//a+b=(a&b)+(a|b)// lleresting
/* 
  auto st = clock();
  ......
  ........ code 
  .......
  cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
  */
int main(){
    /*
     ios_base::sync_with_stdio(0);
      cin.tie(0)
    */
    
    return 0;
}
