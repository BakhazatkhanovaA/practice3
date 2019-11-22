
#include <iostream>
using namespace std;
int main()
{
int sum=0,i=1,n;
cin>>n;
while (i<2*n)
{   
    sum+=i*(i+1);
    ++i;
}
cout<<sum;
return 0;
}






