#include <iostream>
#include<cmath>
 using namespace std;
int main()
{
	int n,x;
    double sum=0 ;
 
    
    cin >> n;
 
    for (int i=1; i<=n; i++)
        sum += 1/(pow(cos(x),i));
 
    cout <<sum << endl;
 
    system("pause");
    
 
  return 0;
}
