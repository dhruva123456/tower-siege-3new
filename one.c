

/*
    float   i = 2, j = 3, k, l,x,y ;
    float   a, b,s ;
    x=i*i;
    y=j*j;
    k = i / y ;
    l = j / x;
    a = i / y;
    b = j / x ;
    s= 7.0/3;
    printf( "%f %f %f %f %f", k, l, a, b ,s);


    int  a, b ;
a = -3 - - 3 ;
b = -3 - - ( - 3 ) ;
printf ( "a = %d b = %d", a, b ) ;



printf ( "nn \n\n nn\n" ) ;
printf ( "nn /n/n nn/n" ) ;

     for(i=0;i<=9;i++)
     {
        ;
     }
    printf("%d",i);

     */

    /*
    int i,j,n;
    scanf("%d",&n);
      for(i=0;i<n;i++) {
        printf("*");
    }
    printf("\n");

    for(i=1;i<n-1;i++) {
        printf("*");
        for(j=1;j<n-1;j++) {
            printf(" ");
        }
        printf("*\n");
    }
    for(i=0;i<n;i++) {
        printf("*");
    }
    printf("\n");
    */
#include <stdio.h>
int armnum(int n){
    int r,i,count=0,pro=1,sum=0;
    int t=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    n=t;
    while(n!=0){
        r=n%10;
        for(i=1;i<=count;i++){
            pro=pro*r;
        }
        sum+=pro;

        n=n/10;
        pro=1;

    }
    return sum;
}
int main(){
    int s,j;
    printf("Enter a number");
    scanf("%d",&j);
    s=armnum(j);
    if(s==j)
    printf("It is a arm num");
    else
    printf("it is not a arm num");
return 0;
}








