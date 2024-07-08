#include <iostream>
using namespace std;

void multiplos(int A[], int n, int num){
    for (int i=0; i<n; i++){
        A[i]=num*(i+1);
    }
}

int main(){
    int n, num;
    
    do{
        cout<<"Ingrese el tamano del arreglo: "; cin>>n;
    } while(n<=0);
    
    int A[n];
    cout<<"Ingrese un numero: "; cin>>num;
    
    multiplos(A, n, num);
    
    cout<<"\nARREGLO PARA EL NUMERO "<<num<<": "<<endl;
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}

