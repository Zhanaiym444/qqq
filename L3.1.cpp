#include <iostream>
using namespace std;

int main() {
    int n,sum=0,x;
    cin>>n;
    while (n--){
        cin>>x ;
        sum += x;
    }
    cout<<"sum:"<<sum;
    

    return 0;
}