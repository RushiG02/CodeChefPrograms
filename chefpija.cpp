#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  long inp[t][3];
  for (int i=0; i <t ; i++) {
    for (int j=0; j <3 ; j++) {
      cin>>inp[i][j];
    }
  }
  for (int i=0; i <t ; i++) {
    ((inp[i][0]+inp[i][1])%inp[i][2]==0)?cout<<"Chef":cout<<"Paja";
    if(i<t-1)
    cout<<endl;
  }
  return 0;
}
