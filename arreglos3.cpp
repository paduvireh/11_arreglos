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

    float menor=tempMin[0];
    string dmen=dia[0];
    
    for(int i=1; i<7; i++){
        if(tempMin[i]<menor){
            menor=tempMin[i];
            dmen=dia[i];
        }
    }
    cout<<"\nDIA CON MENOR TEMPERATURA: "<<endl;
    cout<<"El dia con la menor temperatura registrada fue el dia "<<dmen<<" con "<<menor<<" C"<<endl;

	float temp;
	int coincide=0;
	cout<<"\nBUSCAR UNA TEMPERATURA MAXIMA QUE COINCIDA: "<<endl;
    cout<<"Ingrese una temperatura maxima a buscar: "; cin>>temp;
    cout<<"Dias con temperatura maxima de "<<temp<<" C: ";
    	
    for(int i=0; i<7; i++){
        if(tempMax[i]==temp){
            cout<<dia[i]<<" ";
            coincide++;
        }
    }
    
	if(coincide==0)
        cout<<"No existen dias con esa temperatura maxima registrada."<<endl;
    
	cout<<endl;
    return 0;
}

