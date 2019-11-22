#include <iostream>
#include <cmath>
using namespace std;
 

int main() {
    int n;
    cin>>n;
    for (int i = 1; i < n; i++) {
    	if(i%11==0 && i%n==1)
    	cout<<i<<" ";}
        
        
    return 0;
}
 


