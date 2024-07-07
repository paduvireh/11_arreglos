#include <iostream>
using namespace std;

int main(){
    string dia[7]={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    float tempMin[7], tempMax[7], tempMed[7];
    
    for(int i=0; i<7; i++){
        cout<<"Ingrese la temperatura minima del dia "<<dia[i]<<": "; cin>>tempMin[i];
        cout<<"Ingrese la temperatura maxima del dia "<<dia[i]<<": "; cin>>tempMax[i];
        cout<<endl;
        tempMed[i]=(tempMin[i]+tempMax[i])/2;
    }
    cout<<"TEMPERATURA MEDIA DE CADA DIA: "<<endl;
    for(int i=0; i<7; i++){
        cout<<"- Dia "<<dia[i]<<": "<<tempMed[i]<<" C"<<endl;
    }

    return 0;
}

