// Solución UVa: 11080 Place the Guards
#include <iostream>


int main() {
    int T;
    int v, e;
    int pos1, pos2;

    std::cin >> T;

    while (T--) {

        std::cin >> v >> e;

        int vectores = 0;
        bool posible = 1;
        int guardias = 0;
        char colores[v];
        for(int i = 0; i < v; i++){
            colores[i]='S';
        }
        /*std::cout<<std::endl;
        for(int i = 0; i < v; i++){
            std::cout<<colores[i]<<" ";
        }std::cout<<std::endl;*/

        while(vectores < e){

            std::cin >> pos1 >> pos2;

            if(vectores == 0){ //Rellena las primeras posiciones
                colores[pos1] = 'B';
                colores[pos2] = 'N';
            }else{
                if(colores[pos1] != 'S'){          //Pregunta si pos1 está en el arreglo ya
                    char colorBase = colores[pos1];
                    if(colores[pos2] != 'S'){      //Pregunta si pos2 está en el arreglo ya
                        char colorBase2 = colores[pos2];
                        if(colorBase == colorBase2){
                            posible = 0;
                            //break;
                        }
                    }else{
                        if(colorBase == 'N'){
                            colores[pos2] = 'B';
                        }else{
                            colores[pos2] = 'N';
                        }
                    }
                }else{
                    if(colores[pos2] != 'S'){      //Pregunta si pos2 está en el arreglo ya
                        char colorBase2 = colores[pos2];
                        if(colorBase2 == 'N'){
                            colores[pos1] = 'B';
                        }else{
                            colores[pos1] = 'N';
                        }
                    }else{
                        colores[pos1] = 'B';
                        colores[pos2] = 'N';
                    }
                }
            }
            vectores++;
        }

        if(posible){
            /*int cuentaS = 0;
            int cuentaN = 0;*/
            for(int i = 0; i < v; i++){
                if(colores[i] == 'B'){
                    guardias++;
                }
                /*if(colores[i] == 'S'){
                    cuentaS++;
                }
                if(colores[i] == 'N'){
                    cuentaN++;
                }*/
                //std::cout << colores[i] << " ";
            }//std::cout << std::endl;
            std::cout << guardias << std::endl;
            /*if(cuentaS == cuentaN){
                std::cout << cuentaS + cuentaN << std::endl;
            }else if(cuentaN > 0){
                std::cout << cuentaN << std::endl;
            }else{
                std::cout << cuentaS << std::endl;
            }*/
        }else{
            std::cout << -1 << std::endl;
        }
        guardias = 0;
    }
    
    return 0;
}
