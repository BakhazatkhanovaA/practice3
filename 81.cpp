#include <iostream>
#include <cmath>
using namespace std;
int main()
{
for(int i=2;i<10000;i++){
     int a, b,c,d,e;
  a=(i/10000)%10;
  b=(i/1000)%10;
  c=(i/100)%10;
  d=(i/10)%10;
  e=i%10;
  int sum=a+b+c+d+e;
  for(int j=2; j<100;j++){
      if(i==pow(sum,j)){
      
          cout<<i<<endl; 
      } } }
return 0;
}

