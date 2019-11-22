#include <iostream>
#include<cmath>
 using namespace std;
int main()
{
	int n,a;
    double sum ;
 
    
    cin >> n>>a;
 
    for (int i=1; i<=n; i++)
        sum = pow((a+n),2);
 
    cout <<sum << endl;
 
    system("pause");
    
 
  return 0;
}
