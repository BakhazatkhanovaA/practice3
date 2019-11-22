#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,S;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a){
		cout<<"triangle exist";
	}
	else{
		cout<<"Not exist";
	}
	 if(S=sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c))){
	 
	cout<<S;}
	
	
	

		
	
return 0;	
}
