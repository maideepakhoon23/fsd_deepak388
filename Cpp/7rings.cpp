#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n,x,totalbill;
        cin>>n>>x;
        totalbill=n*x;
        if(totalbill>=10000&&totalbill<=99999)
        {
            cout<<"YES"<<"\n";}
        else{
            cout<<"NO"<<"\n";
            
        }
        }
return 0;

    }
