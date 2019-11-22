 #include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "rus");
    
    long d,m,g,D,M,G;
    cout << "Insert Data #1 \n";
    cout << "Insert Day \n";
    cin >> d;
    cout <<"Insert mounth \n";
    cin >> m;
    cout <<"Insert year \n";
    cin >> g;
    cout << "Insert data #2 \n";
    cout << "Insert day \n";
    cin >> D;
    cout <<"Insert mounth \n";
    cin >> M;
    cout <<"Insert year \n";
    cin >> G;
    if(g<=G)
    switch (m){
        case 1:(m<=M)?(switch):(cout << "no";);
        break;
        case 2:(m<=M)?(switch):(cout << "no";);
        break;
        case 3:(m<=M)?(switch):(cout << "no";);
        break;
        case 4:(m<=M)?(switch):(cout << "no";);
        break;
        default:cout << "no";}
    else
    cout << "no" << endl;
    
    
        
 
return 0;
}
