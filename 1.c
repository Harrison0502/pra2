#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(){
    int n,count=0;
    scanf("%d",&n);
    int x[50];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-j-1;k++){
            if(x[k]>x[k+1]){
                swap(&x[k],&x[k+1]);
                count++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps\n",count);
    
}