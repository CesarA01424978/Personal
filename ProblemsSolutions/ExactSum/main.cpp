//Resolución del UVa: 11057 - Exact Sum
#include <iostream>
#include <algorithm>

int cantidad;
int precios[1000001];
int dinero;

void EntradaDeDatos(){
  for(int i=0; i<cantidad; i++){
    std::cin>>precios[i];
  }
  std::sort(precios, precios + cantidad);
  std::cin>>dinero;  
}

void Salida(int x, int y){
  if(x > y){
    std::cout << "Peter should buy books whose prices are " << y << " and " << x << ".\n" << "\n";
  }else{
    std::cout << "Peter should buy books whose prices are " << x << " and " << y << ".\n" << "\n";
  }
}

void MitadMasCerca(int A[], int m, int &pos){
  int mitad = m/2;
  for(int i=0; i<=pos; i++){
    if(A[pos - i] == mitad){
      pos = pos - i;
      break;
    }else if(A[pos + i] == mitad){
      pos = pos + i;
      break;
    }
  }
  
}

void Buscar(int n, int A[], int m){

  bool acabo=0;
  int n2 = n/2;
  int pos = n2;
  MitadMasCerca(A, m, pos);
  //std::cout<<pos<<std::endl;
  int x = A[pos];

  for(int i=1; i<=pos; i++){
    int y = A[pos-i];

    if(x + y == m){
      Salida(x,y);
      acabo=1;
      break;
    }
    
    int y2 = A[pos+i];
    if(x + y2 == m){
      Salida(x,y2);
      acabo=1;
      break;
    }
  }
  if(acabo == 0){
    int borra = n2;
    int salto = 0;
    int A2[n-1];
    for(int i=0; i<n-1; i++){
      if(i == borra){
        salto++;
      }
      A2[i] = A[i+salto];
    }
    Buscar(n-1,A2,m);
  }
}

void Imprimir(int A[], int c){
  for(int i=0; i<c; i++){
    std::cout<<A[i]<<" ";
  }
}

int main(){

  while(std::cin>>cantidad){

    EntradaDeDatos();
    //Imprimir(precios,cantidad); std::cout<<std::endl<<std::endl;
    Buscar(cantidad,precios,dinero);
  }
  
  return 0;
}