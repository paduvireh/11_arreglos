#include <iostream>
#include <string>
using namespace std;

int main(){
    int nFP, nPG;

    cout<<"Ingrese la cantidad de estudiantes en FP: "; cin>>nFP; cout<<endl;
    string FP[nFP];

    for(int i=0; i<nFP; i++){
        cout<<"Ingrese el nombre del estudiante #"<<i+1<<" en FP: "; cin>>FP[i];
    }

    cout<<"\nIngrese la cantidad de estudiantes en PG: "; cin>>nPG; cout<<endl;
    string PG[nPG];

    for(int i=0; i<nPG; i++){
        cout<<"Ingrese el nombre del estudiante #"<<i+1<<" en PG: "; cin>>PG[i];
    }
    
    string comunes[nFP+nPG];
    int nC=0;

    for(int i=0; i<nFP; i++){
        for(int j=0; j<nPG; j++){
            if(FP[i]==PG[j]){
                comunes[nC]=FP[i];
                nC++;
            }
        }
    }

    if(nC>0){
        cout<<"\nExisten "<<nC<<" estudiantes en ambas clases: "<<endl;
        for(int i=0; i<nC; i++){
            cout<<"- "<<comunes[i]<<endl;
        }
        cout<<endl;
        
    } else
        cout<<"\nNo existen estudiantes en ambas clases."<<endl;

    return 0;
}

