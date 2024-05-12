#include <stdio.h>
    int main()
    {
        int L,A,B,C,D,R;
        scanf("%d\n%d\n%d\n%d\n%d\n",&L,&A,&B,&C,&D);
        if ((A/C)>(B/D))
        {
           if((A%C)!=0)
           {
              R= L-(A/C)-1;
              printf("%d",R);
           }
           else 
           {
              R= L-(A/C);
              printf("%d",R);
           }
        }
        else
            if((B%D)!=0)
           {
              R= L-(B/D)-1;
              printf("%d",R);
           }
           else 
           {
              R= L-(B/D);
              printf("%d",R);
           }
           
           return 0;
    }