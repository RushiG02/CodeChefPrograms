#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while (t--) {
    string s;
    cin>>s;
    int i=0;
    for(;i<s.size();i++)
    if (s[i] == '1'){
      s[i] = ' ';

      if(s[i-1]=='0')
      s[i-1]='1';
      else if(s[i-1]=='1')
      s[i-1]='0';
      if(s[i+1]=='0')
      s[i+1]='1';
      else if(s[i+1]=='1')
      s[i+1]='0';

      i = 0;
    }
    int flag=0;
for (int i = 0; i < s.size(); i++) {
  if(s[i]=='0')
  {
    flag=1;
    break;
  }

}
if(flag)
cout<<"LOSE"<<endl;
else
cout<<"WIN"<<endl;
  }
  return 0;
}
