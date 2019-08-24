#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while (t--) {
    int n,count=0;
    cin>>n;
    int a[n];
    for(int q=0;q<n;q++){
      cin>>a[q];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
          int ans1=a[i];
          for(int x=i+1;x<j;x++)
        {
          ans1^=a[x];
        }
        int ans2=a[j];
          for(int x=j+1;x<=k;x++)
        {

           ans2^=a[x];
        }
        if(ans1==ans2)
         count++;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
