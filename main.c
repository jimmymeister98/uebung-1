#include <stdio.h>

int main() {



    int b,a,g;

    for (int i=1111;i<=9999; i++) {
        a=i;

        b = a/1000;

                if(i%b==0)
                {printf("%d teiler von %d\n" ,b,i);}
        a=a-b*1000;

        //Die folgenden if else statements dienen allein dazu einen divide by zero error entgegenzuwirken, zuverlässig
        if (a==0){

        }
        else{
            b= a / 100;
            printf("%d teiler von %d\n" ,b,i);
        }


      //  if (i%b==0){
       //     printf("%d teiler von %d\n" ,b,i);}
            a=a-b*100;
        if (a==0){

        }
         else {
            b= a / 10;
            printf("%d teiler von %d\n" ,b,i);
         }
       // if (i%b==0){
        //    printf("%d teiler von %d\n" ,b,i);
        //}
       a = i;
      g =  a % 10 ;
       printf ("%d teiler von %d\n" ,g,i );
       printf ("_______________________________________\n");
 //   printf("%d teiler von %d\n" ,b,i);
}
return 0;
        }
