
#include <iostream>
using namespace std;


int main() {
    int n;
    int count=0;
    cout<<"enter no to check for prime: "<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0)
        count++;
    }
    if(count==1)
    {
        cout<<"False";
    }
    else
    {
        cout<<"true"<<endl;
    }
    return 0;
}
