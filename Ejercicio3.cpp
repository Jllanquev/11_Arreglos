#include <iostream>
using namespace std;

int main(){
    int n,A[30],aux;
    cout<<"*******************************************************"<<endl;
	cout<<"*****        SERIE DE ELEMENTOS INVERTIDOS        *****"<<endl;
	cout<<"*******************************************************"<<endl<<endl;
    cout<<"Ingrese el numero de elementos:  ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<"Ingrese el valor numerico del elemento:  ";
        cin>>A[i];
    }
    cout<<endl<<endl;
    for(int i=0;i<n/2;i++){
        aux=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=aux;
    }
    cout<<"******************************************************"<<endl;
	cout<<"******           LISTA DE POSCICIONES           ******"<<endl;
    cout<<"******************************************************"<<endl<<endl;
	for(int i=0;i<=n-1;i++){
        cout<<"Pocision #"<<(i+1)<<"   -   "<<A[i]<<endl;
    }
    return 0;
}
