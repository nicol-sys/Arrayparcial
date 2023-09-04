#include <iostream>
#include <conio.h>

int main(){
    int numeros[]={4,1,3,2,5,9,6,10,7,11,8,13,18,14,16,17,12,15,19,22,28,26,21,29,20,24,30,27,25,23};
    //iteradores
    int n,v,axul;
    
    for(n=0;n<30;n++){//desde que i sea = a 0 y i sea menor a 30
        for(v=0;v<30;v++){
            if(numeros[v] > numeros[v+1]){
               //intercambio de valores
               axul=numeros[v];
               numeros[v]=numeros[v+1];
               numeros[v+1]=axul;
            }
        }
    }
    std::cout << "Numeros organizados de manera asendente" <<std:: endl;
    for(n=0;n<30;n++){
        std::cout<< numeros[n]<<" ";
    }
    
}
