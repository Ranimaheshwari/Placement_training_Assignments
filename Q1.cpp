//Rani maheshwari 18ejics135
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter numbers...";
    cin>>a>>b>>c;
    if((a>=b)&&(a>=c))
    {
        if(b>=c)
        {
            cout<<"\n Descending order : "<<a<<" "<<b<<" "<<c;
        }
        else
        {
            cout<<"\n Descending order : "<<a<<" "<<c<<" "<<b;
        }
    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
        {
            cout<<"\n Descending order : "<<b<<" "<<a<<" "<<c;
        }
        else
        {
            cout<<"\n Descending order : "<<b<<" "<<c<<" "<<a;
        }
    }
    else if((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            cout<<"\n Descending order : "<<c<<" "<<a<<" "<<b;
        }
        else
        {
            cout<<"\n Descending order : "<<c<<" "<<b<<" "<<a;
        }
    }
    return 0;
}
