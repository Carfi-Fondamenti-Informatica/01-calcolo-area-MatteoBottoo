#include <iostream>
#include <math.h>
using namespace std;

int main(){
//Qui vanno definite le variabili
  
   float a;
   float b;
   float c;

cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti

  cout << "L'area del trangolo vale:" << (a*b)/2 << endl;
  cout << "L'area del quadrato vale:" << pow(a,2) << endl;
  cout << "L'area del rettangolo vale:" << a*b << endl;
  cout << "L'area del trapezio vale:" << ((a+b)*c)/2 << endl;

  return 0;
}
