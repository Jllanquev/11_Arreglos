#include <iostream>
using namespace std;

int main(){
	string op;
	int elementos,mayor,A[10];
	do{
		cout<<"ingrese la cantidad de elementos(Max.10): "<<endl;
		cin>>elementos;
		if(elementos>10) cout<<"El maximo de lementos sera solo 10"<<endl;
		else {
			for(int i=0;i<elementos;i++){
				cout<<"El elemento "<<i+1<<" sera: "<<endl;
				cin>>A[i];
			}
		mayor=A[0];
			for(int i=1;i<=elementos-1;i++){
				if(A[i]>mayor){
					mayor=A[i];
				}
			}
			cout<<"el mayor numero es: "<<mayor<<endl;
		}
		cout<<"Presione y para volver a intentar"<<endl; cin>>op;
	} while(op=="y");
	return 0;
}