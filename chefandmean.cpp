#include <iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,x,temp,flag;
  float m=0.0;
  cin>>t;
  
  while(t--){
  	vector<int> a;
  	flag=0;
  	temp=0;
    cin>>n;
    for (int i=0; i <n ; i++) {
      cin>>x;
      a.push_back(x);
    }
    m=float(accumulate(a.begin(),a.end(),0))/a.size();
  cout<<temp<<endl<<endl;
    for (int i = 0; i < n; i++) {
    if((accumulate(a.begin(),a.end(),0)-a.at(i))/float((a.size()-1))==m)
    {cout<<i<<endl<<endl;
	flag=1;
    temp=i;
    break;
}
	
  }
  if(flag==1)
	cout<<temp+1<<endl;
    else
    cout<<"Impossible"<<endl;
}
return 0;
}
