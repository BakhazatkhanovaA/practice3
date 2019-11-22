#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x1,y1,x2,y2,a1,b1,a2,b2;
cin>>x1>>y1>>x2>>y2>>a1>>b1>>a2>>b2;
 if ((x1<=x2 && x2<=x1+a1)  && (y1<=y2 && y2<=y1+b1) ){
 	cout<<"rectangles are intersect";
 }
else{
cout<<"Rectangles do not intersect";}

	
	

		
	
return 0;	
}
