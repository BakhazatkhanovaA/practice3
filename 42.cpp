#include <iostream>
 using namespace std;
int main()
{
	int n,r;
	cin>>n;
  double sum = 0.0;
   
 
  for(int i = 1; i <= n; ++i)
  r=n*(n+1)*(2*n+1)/6;
    sum += r;
 
  cout << "Result: " << sum << endl;
 
  system("pause");
 
  return 0;
}
