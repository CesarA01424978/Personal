//Solución del UVa: 507 - Jill Rides Again
#include <iostream>

int rutas = 1; //1
int paradas;  //10

void Imprimir(int A[], int c){
  for(int i=0; i<c; i++){
    std::cout<<A[i]<<" ";
  }
   std::cout<<std::endl;
}


void Salida(int max, int x, int y, int ruta){
  if(max > 0){
    std::cout << "The nicest part of route "<< ruta << " is between stops "<< x << " and " << y << "\n";
  }else{
    std::cout << "Route " << ruta << " has no nice parts" << "\n";
  }
}


void SacarMax(int valores[], int rutaActual){
  int matrix[paradas][paradas]={};
  int max = 0;
  int posX = 0;
  int posY = 0;
  int largo = 0;

  for(int i=0; i<paradas; i++){
    //std::cout<<i<<" ";
    for(int j=0; j<paradas; j++){
      if(i==0 && j==0){
        matrix[i][j] = 0;
      }else if(i != j && j>i){
        matrix[i][j] = valores[j-1]+matrix[i][j-1];
      }else{
        matrix[i][j] = matrix[j][i];
      }
      //std::cout<<matrix[i][j]<<" ";
      //std::cout<<j<<" ";
      if(matrix[i][j] > max || (j-i>largo && matrix[i][j] == max)){
        max = matrix[i][j];
        posY = j;
        posX = i;
        largo = j-i;
      }
      
      //if(matrix[i][j] < matrix[i][j]){      }
    }
    //std::cout<<" "<<std::endl;
  }
  /*int n = 0;
  int m = 1;
  //matrix[n][m]=0;
  std::cout<<matrix[n][m];*/
  
  Salida(max,posX+1,posY+1,rutaActual);
}

void EntradaDeDatos(){
  std::cin>>paradas;
  int valores[paradas-1];//4 -5 4 -3..
  for(int i=0; i<paradas-1; i++){
    std::cin>>valores[i];
  }
  SacarMax(valores,rutas);
  //Imprimir(valores,paradas-1);
}

int main(){

  int ultima;
  std::cin>>ultima;

  while(ultima >= rutas){

    EntradaDeDatos();
    
    rutas ++;
  }
  
  return 0;
}