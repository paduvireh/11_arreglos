#include <iostream>
using namespace std;

int main(){
	int A[30], n, cero, S;
	float pcero;
	
	cout<<"Ingrese la cantidad de elementos a leer: "; cin>>n;
	cero=0; S=0;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese el elemento #"<<i+1<<": "; cin>>A[i];
		S=S+A[i];
	
		if(A[i]==0)
		cero=cero+1;
	}
	pcero=cero*100/n;
	
	cout<<"La sumatoria de elementos es: "<<S<<endl;
	cout<<"El promedio de ceros ingresados es: "<<pcero<<"%"<<endl;
	return 0;
}