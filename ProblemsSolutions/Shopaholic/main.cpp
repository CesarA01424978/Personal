#include <iostream>
#include <list>

int t;
int n;
std::list<int> precios;
int temp;

void EntradaDeDatos(){
  for(int i=0; i<n; i++){
    std::cin>>temp;
    precios.push_back(temp);
  }
  precios.sort(std::greater<>{});
}

void Imprimir(){
  for(int i=0; i<n-1; i++){
    if(i%3 == 0){
        std::cout<<precios.front()<<" ";
    }
    precios.pop_front();
  }
}

void SacarMaximo(){
    int maxDescuento = 0;
    //Imprimir();
    int pos=0;
    
    for(int i=0; i<n; i++){
        if(pos == 2){
            maxDescuento = maxDescuento + precios.front();
            pos = 0;
            precios.pop_front();
        }else{
            pos++;
            precios.pop_front();
        }
    }
    
    std::cout<<maxDescuento<<std::endl;
}


int main(){
    std::cin>>t;
    
    while(std::cin>>n){
        EntradaDeDatos();
        SacarMaximo();
    }
    
    return 0;
}