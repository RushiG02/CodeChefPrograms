#include <iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int arr[n][n];
  for (int i=0;i<n;i++) {
    for (int j = 0; j < n; j++) {
      cin>>arr[i][j];
    }
  }
  int a=0,b=0;
  for(int i=0;i<n;i++)
{  a+=arr[i][i];
    b+=arr[i][n-1-i];
}
  cout<<a<<" "<<b<<endl;
  cout<<abs(a-b);
  return 0;
}
