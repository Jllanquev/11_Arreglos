#include <iostream>
using namespace std;

int main(){
	int elementos,mayor,A[10];
	cout<<"ingrese la cantidad de elementos que desea ingresar: ";
	cin>>elementos;
	for(int i=0;i<=elementos-1;i++){
		cin>>A[i];
	}
	mayor=A[0];
	
	for(int i=1;i<=elementos-1;i++){
		if(A[i]>mayor){
			mayor=A[i];
		}
	}
	cout<<"el mayor numero es: "<<mayor;
	
	
	return 0;
}