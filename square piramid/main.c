// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,l,m,n,g;
    printf("Enter Num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        //another for loop
        for(g=n;g>i;g--){
            //print
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("*   ");
        }
        printf("\n");
    }

    //loop 
    for(i=n-1;i>0;i--){
        //anoither for loop
        for(g=n;g>i;g--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("*   ");
        }
        printf("\n");
    }
    
    
    
    

    return 0;
}
