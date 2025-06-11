#include <iostream> 
using namespace std;

int main() {
    int n,s=0,A[20];
    cout<<"Ingrese el numero de elementos: ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>> A[i];
        s=s+A[i];
    }
    int prom=s/n;
    for(int i=0;i<=n-1;i++){
        if(A[i]>prom){
            cout<<A[i]<<endl;
        }
    }
    return 0;

}