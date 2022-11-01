#include <stdio.h>
#include <stdlib.h>

int fb(int n){
    if(n==0 || n==1)
        return n;
    else 
        return fb(n-2) + fb(n-1);

}

int main(void){
    int n=0, i;
    scanf("%d",&n);
    for(i=0; i<n;i++)
    	printf("%d \t",fb(i+1));
   
    return 0;
}
