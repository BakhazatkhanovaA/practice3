#include <iostream>
#include<cmath>
 using namespace std;
int main(){
	int first = 10;

int day = 0;
int sumLength = 0;
 
while(day <= 10)
{
   first= first * 1.1;
   day++;
}
cout<<first<<" ";
 

 
while(day <= 7)
{
   sumLength += first*1.1;
   
   day++;
}
cout<<sumLength<<" ";
    system("pause");
    return 0;
  
}



