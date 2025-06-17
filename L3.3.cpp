#include <iostream>
using namespace std;

int main() {
    int n,x,even=0,odd=0;
    cin>>n;
    
    while (n--) {
        cin>>x;
        if (x%2==0) even++;
        else odd++;
    }
    cout<<"Even:"<<even<<endl;
    cout<<"Odd:"<<odd;
    

    return 0;
}
