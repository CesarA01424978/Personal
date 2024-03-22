// Solución al UVa: 1584 - Circular Sequence.
#include <iostream>
#include <vector>

int arreglos;                       //Cantidad de arreglos metidos.
char base[4] = {'A','C','G','T'};   //Base ya definida de ADN.
std::string secuencia;              //Secuencia de datos metida.
std::vector<int> posiciones;

void BuscarPequenio(){
    int j = 0;
    bool encontro = 0;
    for(int i = 0; i < secuencia.size(); i++){
        if(secuencia[i] == base[j]){
            posiciones.push_back(i);
            encontro = 1;
        }
        if(i >= secuencia.size()-1 && !encontro){
            i = -1;
            j++;
        }
    }
}

void ImprimirVector(){
    for(int i = 0; i < posiciones.size(); i++){
        std::cout<<posiciones[i];
    }
    std::cout<<std::endl;
}

void Mochila(std::string granSecuencia){
    std::vector<int> posiciones2;
    int inicio = posiciones[0];
    int avanza = 0;

    while(true){
        /*Sacar char min*/
        char ch = granSecuencia[posiciones[0]+1];
        for(int i = 1; i < posiciones.size(); i++){
            if(granSecuencia[posiciones[i]+1] < ch){
                ch = granSecuencia[posiciones[i]+1];
            }
        }
        
        for(int i = 0; i < posiciones.size(); i++){
            if(granSecuencia[posiciones[i]+1] <= ch){
                posiciones2.push_back(posiciones[i]+1);
                inicio = posiciones[i]+1;
            }
        }avanza++;
        
        if(posiciones2.size() > 1){
            posiciones = posiciones2;
            posiciones2.clear();
        }else{
            for(int i = 0; i < secuencia.size(); i++){
                std::cout<<granSecuencia[inicio-avanza+i];
            }std::cout<<std::endl;
            break;
        } 
    }
}


int main(){

    std::cin>>arreglos;

    while(std::cin>>secuencia){

        BuscarPequenio();
        std::string granSecuencia = secuencia + secuencia;
        Mochila(granSecuencia);
        posiciones.clear();
        
    }

    return 0;
}