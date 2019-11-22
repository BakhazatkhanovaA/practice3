#include <iostream>
using namespace std;
int main()
{
for (int i=100; i<1000; i++)
      {
        int t = i, sum=0;
        while (t>9)
          {
            int z = t%10;
            t = t/10;
            sum += z*z*z;
          }
        sum += t*t*t;
        if (sum == i) cout << i << " ";
      }
 return 0;
}
