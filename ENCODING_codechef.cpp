#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  long t;
  cin>>t;
  while (t--) {
    long nl,l,nr,r,sum=0;
    cin>>nl>>l>>nr>>r;
    for(long i=l;i<=r;i++){
      vector<long> v;
      long temp=i,x=i;
      while(temp){
        v.push_back(temp%10);
        temp/=10;
      }

      reverse(v.begin(), v.end());
      for(int i=0;i<v.size()-1;i++){
        it:
        int a=i+1;
        if(v[i]==v[a]){
          x=x-v[i]*pow(10,v.size()-1-a);
          i=i+1;
          goto it;
        }
      }
      sum=sum+x;

    }
    cout<<sum<<endl;
  }

  return 0;
}
