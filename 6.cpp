#include<iostream>
using namespace std;
 int main(){
 	int day,mounth;
 	cin>>day>>mounth;
    switch (mounth)
            {
                case 1: 
                case 3: 
                case 5: 
                case 7: 
                case 8: 
                case 10: 
                case 12:
                    if (day >= 1 && day <= 31 )
                    cout<<"Yes";
                    else
                        cout<<"NO";
                    break;
                case 2: 
                    if (day >= 1 && day <= 28 )
                        cout<<"Yes";
                    else
                        cout<<"NO";
                    break;
                case 4: 
                case 6: 
                case 9: 
                case 11: 
                    if (day >= 1 && day <= 30 )
                        cout<<"Yes";
                    else
                        cout<<"No";
                    break;
                default:
                        cout<<"No";
                    break;
                                        
                                   
 
        }

    return 0;
}
