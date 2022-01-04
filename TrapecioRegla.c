#include <stdio.h>
#include <math.h>
float calc_fxn(float b){
  float temp;
  temp = (0.2 + (25 * b) - (200 * pow(b,2)) + (675 * pow(b,3)) - (900 * pow(b,4)) + (400*pow(b,5)));
  return temp;
}
int main(){
  int n,i;
  float a,b,x,y,fxn,resultado=0,temp=0;
 centrartexto("REGLA DEL TRAPECIO\n",wherey()+1);
  centrartexto("Para la funcion: f(x) = 0.2 + 25x - 200x^2 + 675x^3 - 900x^4 + 400x^5\n\n",wherey()+1);
  implinea();
  printf("\nIngresa 'a': ");
  scanf("%f",&a);
  printf("Ingresa 'b': ");
  scanf("%f",&b);
  printf("\nIngresa el numero de segmentos\n");
  scanf("%d",&n);
  x = b / n;
  y = a + x;
  for(i=1;i<=n-1;i++)
    {
      fxn = calc_fxn(y);
      y = y + x;
      resultado = resultado + fxn;
    }
  temp = ( b - a) * ( calc_fxn(a) + 2*(resultado) + calc_fxn(b))/(2*n) ;
  printf("\nResultado = %f",temp);
  getch();
  return 0;
}
