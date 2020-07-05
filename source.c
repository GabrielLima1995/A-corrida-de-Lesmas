#include<stdio.h>

int main ()

{   int l,vi,i,n,aux=0;


   while (scanf("%d",&l)!= EOF)

   {
       for (i=0;i<l;i++)
       {
           scanf("%d",&vi);

           if (vi<10)
            n=1;
           else
            if (vi >=10 && vi <20)
            n=2;
           else
            if (vi >=20)
            n=3;

           if (aux < n )
            aux=n;
       }
        printf("%d\n",aux);
        aux=0;

   }

    return 0;
}
