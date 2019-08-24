#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> a(k,0);
    vector<int> b(k,0);
int temp=n;
    while(n){
    for(int i=0;i<k;i++){
      a[i]++;
      n--;
    }
  }
  while(temp){
    for(int i=0;i<k;i++){
      if(temp==0)
       break;
      b[i]+=k;
      temp-=k;
    }
  }
  
     if(equal(a.begin(),a.end(),b.begin()))
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
  }
  return 0;
}
