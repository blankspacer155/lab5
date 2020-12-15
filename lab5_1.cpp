#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin>>n;
    int Codd=0,Ceven=0;
    while(n!=0)
    {
        if(n%2==0)Ceven++;
        else{Codd++;}
        cout << "Enter an integer: ";
        cin>>n;
    }
    cout << "#Even numbers = "<<Ceven<<endl;

    cout << "#Odd numbers = "<<Codd;
    return 0;
}
