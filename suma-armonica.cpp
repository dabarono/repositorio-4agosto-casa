#include<iostream>
#include<cmath>

using namespace std;

int main(void){
  double s=0;
  int i=1;
  int n=10;
  int j=1;
  for(j;j<=n;j=j+1){
  for(i;i<=j;i=i+1)
    {
    s=s+(1.0/i);
      }
  cout<<j<<" "<<s<<endl;
  }
}

