#include <iostream>
using namespace std;

int main() {
    int n,x,min,max;
    cin>>n>>x;
    min=max=x;
    for(int i=1;i<n;i++) {
        cin>>x;
        if(x<min) min=x;
        if(x>max) max=x;
    }
    cout<<"min:"<<min<<endl;
    cout<<"max:"<<max;
    

    return 0;
}