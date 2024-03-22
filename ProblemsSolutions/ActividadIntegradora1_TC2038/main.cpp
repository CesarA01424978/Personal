// =========================================================
// Actividad Integradora 1
// Por:
//      Cásar Antonio López Vargas      -  A01424978
//      Diego Emilio Barrera Hernández  -  A01366802
// Fecha: 19/Enero/2024
// =========================================================
#include <iostream>
#include <fstream>
#include<stdio.h>
#include<string.h>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

/*-----------------------------------------------------------------------
 *                                 PARTE 1
 * ----------------------------------------------------------------------*/

/*
Aqui se llenará el arreglo Z con los datos,
lo que se busca es poder verificar el patron
y así poder identificar su inicio
*/
void Z_algorith(string str, int Z[]) {
  int n = str.length();
  int L = 0;
  int R = 0;
  int k;
  L = R;
  for (int i = 1; i < n; i++) {
    if (i > R) {
      L = R = i;
      while (R < n && str[R - L] == str[R])
        R++;
      Z[i] = R - L;
      R--;
    }

    else {
      k = i - L;
      if (Z[k] < R - i + 1)
        Z[i] = Z[k];
      else {
        L = i;
        while (R < n && str[R - L] == str[R])
          R++;
        Z[i] = R - L;
        R--;
      }
    }
  }
}

int search_malicious_code(string Code, string MaliciousCode) {
  string all = MaliciousCode + "$" + Code;
  int n = all.length();

  int Z[n];
  Z_algorith(all, Z);
  bool check = false;

  for (int i = 0; i < n; i++) {
    if (Z[i] == MaliciousCode.length()) {
      cout << "- true, start at position " << i - MaliciousCode.length() - 1
           << "\n";
      check = true;
    }
  }
  if (check == false) {
    cout << "- false"
         << "\n";
  }
  return 1;
}

/*-----------------------------------------------------------------------
 *                                 PARTE 2
 * 
 ----------------------------------------------------------------------*/
void Imprimir_Arreglo(int A[], int c){
  for(int i=0; i<c; i++){
    cout<<A[i]<<", ";
  }
  cout<<"\n"<<endl;
}

void Imprimir_String(string A){
  for(int i=0; i<A.length(); i++){
    cout<<A[i]<<"";
  }
}

void Hacer_Arreglo(string A,string &B){
  int contador = 0;

  for(int i = 0; i < A.length(); i++){
    B[i+contador]='|';
    contador++;
    B[i+contador] = A[i];
    if(i==A.length()-1){
      B[i+contador+1]='|';
    }
  }
  //Imprimir_String(B);
  //Imprimir_Arreglo(A, n);
}

void Manacher(string A){
  string Q = A+A+"$";
  Hacer_Arreglo(A,Q);
  int max, pos;
  max = 0;
  pos = 0;
  
  int P[Q.length()];
  for(int i=0; i<Q.length(); i++){
    P[i] = 0;
  }
  //Imprimir_Arreglo(P,Q.length());
  //cout<<Q<<endl;
  
  for(int i=1; i<Q.length(); i++){
    for(int j=1; j<Q.length(); j++){
      if((i-j >= 0) && (j+i < Q.length()) && (Q[i-j] == Q[i+j])){
        P[i]++;
        if(P[i] > max){
          max = P[i];
          pos = i;
        }
      }else{
        break;
      }
    }
  }
  //cout<<"implementacion: "<<endl;
  //cout<<Q<<endl;
  //Imprimir_Arreglo(P,Q.length());
  //cout<<Q[pos - max+1]<< ", " << Q[pos + max-1] << endl;
  //cout<<(pos/2)-(max/2)<<", "<<(pos/2)+(max/2)<<endl;
  cout<<"mirrored code found, start at "<<(pos/2)-(max/2)<<", ended at "<<(pos/2)+(max/2)<<endl;
  /*for(int i=pos - max; i<=pos + max; i++){
    cout<<A[i];
  }*/
}

/*-----------------------------------------------------------------------
 *                                 PARTE 3
 * ----------------------------------------------------------------------*/
auto collectSubStrings( const std::string& s, int maxSubLength ){
  int l = s.length();
  auto res = std::set<std::string>();
  for ( int start = 0; start < l; start++ ){
    int m = std::min( maxSubLength, l - start + 1 );
    for ( int length = 1; length < m; length++ ){
      res.insert( s.substr( start, length ) );
    }
  }
  return res;
}

std::string lcs( const std::string& s0, const std::string& s1 ){
    // collect substring set
    auto maxSubLength = std::min( s0.length(), s1.length() );
    auto set0 = collectSubStrings( s0, maxSubLength );
    auto set1 = collectSubStrings( s1, maxSubLength );

    // get commons into a vector
    auto common = std::vector<std::string>();
    std::set_intersection( set0.begin(), set0.end(), set1.begin(),set1.end(), std::back_inserter( common ) );

    // get the longest one
    std::nth_element( common.begin(), common.begin(), common.end(), []( const std::string& s1, const std::string& s2 ) {
      return s1.length() > s2.length();
    } );
    return *common.begin();
}
/*-----------------------------------------------------------------------
 *                           Lectura de archivos
 * ----------------------------------------------------------------------*/

/*
 * Como los archivos unicamente tienen una linea
 * agarramos la primera linea de cada archivo y lo
 * guardamos en un string y eso retornamos
 *
 * return: string linea de datos
 */
string read_file(string filename) {
  char c;
  ifstream file(filename);
  string line;

  file >> skipws;

  while (file >> c) {
    line += c;
  }

  return line;
}



int main() {

  // Estas variables ya tienen la linea de texto de cada documento
  // DE HECHO LES PONES COUT Y SIN PEDOS SALEN XD
  string transmission1 = read_file("transmission1.txt");
  string transmission2 = read_file("transmission2.txt");
  string mcode1 = read_file("mcode1.txt");
  string mcode2 = read_file("mcode2.txt");
  string mcode3 = read_file("mcode3.txt");

  /*-------------------------
  Parte 1
  ---------------------------*/
  cout << "\t-------------------------Parte 1---------------------------\n" << endl;
  cout << "transmission1.txt:"
       << "\n";
  cout << "mcode1.txt ";
  search_malicious_code(transmission1, mcode1);
  cout << "mcode2.txt ";
  search_malicious_code(transmission1, mcode2);
  cout << "mcode3.txt ";
  search_malicious_code(transmission1, mcode3);

  cout << "\n";

  cout << "transmission2.txt:"
       << "\n";
  cout << "mcode1.txt ";
  search_malicious_code(transmission2, mcode1);
  cout << "mcode2.txt ";
  search_malicious_code(transmission2, mcode2);
  cout << "mcode3.txt ";
  search_malicious_code(transmission2, mcode3);

  cout << "\n";

  /*-------------------------
  Parte 2
  ---------------------------*/
  cout << "\t-------------------------Parte 2-------------------------\n" << endl;
  
  cout << "transmission1.txt:"<< endl;
  Manacher(transmission1);
  cout<<"\n";
  cout << "transmission2.txt:"<< endl;
  Manacher(transmission2);
  cout << "\n";
  

  /*-------------------------
  Parte 3
  ---------------------------*/
  cout << "\t-------------------------Parte 3-------------------------\n" << endl;
  cout << "the longest common substring between transmission1.txt and transmission2.txt is " << lcs(transmission1, transmission2).length() << " characters long" << "\r\n";
  
  return 0;
}