#include <iostream>
#include <fstream>



using namespace std;

void alginsercion();
void impresion();
void ing();

int Orde[5];

int main() {
ing();
alginsercion();
impresion();

return 0;
}
//algoritmo por insercion;
void alginsercion(){

int i, pos, aux; 

for(int i=0; i<5; i++){
  pos=i;
  aux= Orde[i];

  while((pos>0 && (Orde[pos-1] > aux))){
      Orde[pos] = Orde[pos-1]; 
      pos --;  
  }  
  Orde[pos]= aux; 
}
}

void impresion(){
cout<<"Orden Ascendente\n";
for(int i=0; i<5; i++){
        cout<<Orde[i];
        if(i<4){
                cout<<", ";
        }
        if(i==4){
                cout<<".";
        }    
}
}

void ing(){
        cout<<"ORDENACION DE NUMEROS CON TRES POSICIONES\n";
        for(int i=0; i<5; i++){
        cout<<"Ingrese el numero["<<i+1<<"]: ";
        cin>>Orde[i];
        }
}