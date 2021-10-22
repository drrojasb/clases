#include <iostream>
#include <cmath>
int main ()
{
  double x = 9.7, y = -1.87;
  double z = 0;

  z = x + y;
  std::cout << z << std::endl;
  
  z = x - y;
  std::cout << z << std::endl;

  z = x * y;
  std::cout << z << std::endl;

  z = x / y;
  std::cout << z << std::endl;

  int p = -2.9;
  std::cout << p << std::endl; //Como m se declaro como una variable entera, entonces se trunca a -2

  std::cout << 2*3-4/5 << std:: endl; //Al escribir los números sin punto flotante, se declaran implícitamente como enteros y por eso el resultado de la operación es 6

  std::cout << 2*3-4.0/5 << std:: endl; //Ahora si nos da el resultado correcto: 5.2

//Operador módulo '%'
  std::cout << 4%3 << std:: endl;
  std::cout << -4%3 << std:: endl;

//Pre-incremento y post-incremento
  int ii;
  int jj = 3;
  ii = jj++; //primero se hace la asignación y despues el incremento
  std::cout << ii << std:: endl;
  std::cout << jj << std:: endl;
  jj = 3;
  ii = ++jj; //primero se hace el incremento y despues la asignación
  std::cout << ii << std:: endl;
  std::cout << jj << std:: endl;
  

//Operadores lógicos
//con '=' se asigna un valor a una variable, mientras que '==' es un operador de comparación 
  std::cout << ((5==5) && (3>6)) << std::endl; //1 & 0 = 0
  std::cout << ((5==5) || (3>6)) << std::endl; //1 | 0 = 0

  int flag = (5<4) ? -1 : 32; // (5<4) = false, entonces flag = 32 
  std::cout << flag << std::endl;
//'&' solo realiza la operación entre bits
  int m = 2, n = 17, k = 0;
  k = m & n; // 00010 & 10001 = 0     
  std::cout << k << std::endl; 
  k= m | n; // 00010 | 10001 = 10011
  std::cout << k << std::endl;
  k = m << 2; // 10 << 2 = 1000
  std::cout << k << std::endl;
  k = m >> 2; // 10 >> 2 = 00
  std::cout << k << std::endl;

  return 0;

}
