#include <iostream>
using namespace std;

int main(){
    int n,A[30],aux;
    cout<<"ingrese el numero de elementos: ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cout<<"Ingrese el valor del elemento: ";
        cin>>A[i];
    }
    for(int i=0;i<n/2;i++){
        aux=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=aux;
    }
    for(int i=0;i<=n-1;i++){
        cout<<"Pocision "<<i<<" - ";
        cout<<A[i]<<endl;

    }
    return 0;
}