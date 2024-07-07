#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Ingrese la cantidad de elementos a leer: "; cin>>n;
	int A[n];
	cout<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese el elemento #"<<i+1<<": "; cin>>A[i];
	}

	return 0;
}
