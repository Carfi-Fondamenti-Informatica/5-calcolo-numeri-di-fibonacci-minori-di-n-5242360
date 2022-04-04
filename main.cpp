#include <iostream>
using namespace std;

int main() {
    int n,a=0,b=1, g=0;
    cout<<"inserire un valore\n";
    cin>>n;
    while(g<n){
        g=a+b;
        b=a;
        a=g;
        if(g<=n){
            cout<<g<<endl;
        }
    }

    return 0;
}
