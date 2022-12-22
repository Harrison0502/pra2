#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int x=n/10000000;
    long long int y=n%10000000;
    if(x!=0){
        int k=0,l=0,h=0,s=0;
        k=x/10000000;
        x-=k*10000000;
        l=x/100000;
        x-=l*100000;
        h=x/1000;
        x-=h*1000;
        s=x/100;
        x-=s*100;
        if(k)
            printf("%d kuti %d laku %d hajar %d shata %d",k,l,h,s,x);
        else if(l)
            printf("%d laku %d hajar %d shata %d",l,h,s,x);
        else if(h)
            printf("%d hajar %d shata %d",h,s,x);
        else if(s)
            printf("%d shata %d",s,x);
        else
            printf("%d shata %d",s,x);
        printf(" kuti ");
        if(1){
        int l2=0,h2=0,s2=0;
        l2=y/100000;
        y-=l2*100000;
        h2=y/1000;
        y-=h2*1000;
        s2=y/100;
        y-=s2*100;
            printf("%d laku %d hajar %d shata %d.",l2,h2,s2,y);
    }

    }
    else if(y){
        int l=0,h=0,s=0;
        l=y/100000;
        y-=l*100000;
        h=y/1000;
        y-=h*1000;
        s=y/100;
        y-=s*100;
        if(l)
            printf("%d laku %d hajar %d shata %d.",l,h,s,y);
        else if(h)
            printf("%d hajar %d shata %d.",h,s,y);
        else if(s)
            printf("%d shata %d.",s,y);
        else
            printf("%d.",y);
    }

}