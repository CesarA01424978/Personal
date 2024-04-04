// Solución a UVa 111: History Grading
#include <iostream>

int cantElementos = 0;
bool control = 1;
int pos = 0;
int maxSub = 0;

void EntradaDeDatos(){

    bool sige = 1;
    int matrix[10000][cantElementos];
    int i=0;
    int cantArreglos = 0;
    int arregloActual = 1;
    int avanza1 = 0;
    int avanza2 = 0;
    int contador[cantElementos] = {};
    int auxPos[cantElementos] = {};

    while(sige){
        cantArreglos++;
        for(int j=0; j<cantElementos; j++){
            if(std::cin>>pos){
                if(pos <= cantElementos){
                    matrix[i][pos-1] = j+1;
                    //std::cout<<pos<<" ";
                }else{
                    /*Sacar la subsecuencia más larga*/
                    while(arregloActual < cantArreglos-1){
                        //std::cout<<"--arregloActual--"<<arregloActual<<std::endl;
                        while(avanza1 < cantElementos && avanza2 < cantElementos){
                            if(matrix[arregloActual][avanza2] == matrix[0][avanza1]){
                                //std::cout<<matrix[arregloActual][avanza2]<<" Encontrado en la posición: "<<avanza1<<std::endl; //Posición
                                auxPos[avanza2] = avanza1;
                                avanza1 = -1;
                                if(avanza2 == 0){
                                    contador[avanza2] = 1;
                                }else{
                                    for(int retro=avanza2-1; retro>=0; retro--){
                                        if(auxPos[retro] < auxPos[avanza2] && contador[avanza2] <= contador[retro]){
                                            contador[avanza2] = contador[retro];
                                        }
                                    }
                                    contador[avanza2]++;
                                }
                                if(contador[avanza2] > maxSub){
                                    maxSub = contador[avanza2];
                                    //std::cout<<avanza2<<"-"<<maxSub<<std::endl;
                                    //revisar por qué salen de mas(ver output)
                                }
                                avanza2++;
                            }
                            avanza1++;
                        }
                        //std::cout<<std::endl;
                        std::cout<<maxSub<<std::endl;
                        maxSub = 0;
                        avanza1 = 0;
                        avanza2 = 0;
                        arregloActual++;
                        for(int aa=0; aa<cantElementos; aa++){
                            auxPos[aa] = 0;
                            contador[aa] = 0;
                        }
                    }
                    cantElementos = pos;
                    sige=0;
                    cantArreglos = 0;
                    break;
                }
            }else{
                /*Sacar la subsecuencia más larga*/
                while(arregloActual < cantArreglos-1){
                    //std::cout<<"--arregloActual--"<<arregloActual<<std::endl;
                    while(avanza1 < cantElementos && avanza2 < cantElementos){
                        if(matrix[arregloActual][avanza2] == matrix[0][avanza1]){
                            //std::cout<<matrix[arregloActual][avanza2]<<" Encontrado en la posición: "<<avanza1<<std::endl; //Posición
                            auxPos[avanza2] = avanza1;
                            avanza1 = -1;
                            if(avanza2 == 0){
                                contador[avanza2] = 1;
                            }else{
                                for(int retro=avanza2-1; retro>=0; retro--){
                                    if(auxPos[retro] < auxPos[avanza2] && contador[avanza2] <= contador[retro]){
                                        contador[avanza2] = contador[retro];
                                    }
                                }
                                contador[avanza2]++;
                            }
                            if(contador[avanza2] > maxSub){
                                maxSub = contador[avanza2];
                                //std::cout<<avanza2<<"-"<<maxSub<<std::endl;
                                //revisar por qué salen de mas(ver output)
                            }
                            avanza2++;
                        }
                        avanza1++;
                    }
                    //std::cout<<std::endl;
                    std::cout<<maxSub<<std::endl;
                    maxSub = 0;
                    avanza1 = 0;
                    avanza2 = 0;
                    arregloActual++;
                    for(int aa=0; aa<cantElementos; aa++){
                        auxPos[aa] = 0;
                        contador[aa] = 0;
                    }
                }
                cantElementos = 0;
                sige=0;
                cantArreglos = 0;
                break;
            }
        }
        //std::cout<<std::endl;
        /*if(sige){
            for(int x=0; x<cantElementos; x++){
                std::cout<<matrix[i][x]<<" ";
            }
            std::cout<<std::endl;
        }*/
        i++;
    }
}


int main(){
    std::cin>>cantElementos;

    while(control){
        if(cantElementos != 0){
            EntradaDeDatos();
        }else{
            control = 0;
        }
    }
    return 0;
}