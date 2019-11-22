#include <iostream>
 using namespace std;
int main()
{
  double sum = 0.0;
 
  for(int i = 1; i <= 100; ++i)
    sum += i;
 
  cout << "Result: " << sum << endl;
 
  system("pause");
 
  return 0;
}
