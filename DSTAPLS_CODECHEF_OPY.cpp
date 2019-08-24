#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
int t;
cin>>t;
while(t--){
  long n,k;
  cin>>n>>k;
  long r=n/k;
  if(r%k==0)
  cout<<"NO"<<endl;
  else
  cout<<"YES"<<endl;
}
  return 0;
}
