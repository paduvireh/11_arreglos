#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Ingrese la cantidad de elementos a leer: "; cin>>n;
	int A[n], P[n], I[n];
	int pcont=0, icont=0;
	cout<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese el elemento #"<<i+1<<": "; 
		cin>>A[i];
		
		if(A[i]%2==0){
			P[pcont]=A[i];
			pcont++;
		}
		else {
			I[icont]=A[i];
			icont++;
		}	
	}
	
	cout<<"\nELEMENTOS PARES: ";
	for(int i=0; i<pcont; i++){
		cout<<P[i]<<" ";
	}
	
	cout<<"\nELEMENTOS IMPARES: ";
	for(int i=0; i<icont; i++){
		cout<<I[i]<<" ";
	}
	cout<<endl;
	return 0;
}
