#include <stdio.h>
#include <stdlib.h>



int main ()
{
float x, y, pi;
 int p=0,i=0,N=1000;

for (i=0;i<N;i++){

x= (float) rand() / RAND_MAX *2 -1;
y= (float) rand() / RAND_MAX *2 -1;


if((x*x+ y*y)<1)
{
p++;
}
}

pi=(float)4*p/N;

printf("%f", pi);

return 0;
}


