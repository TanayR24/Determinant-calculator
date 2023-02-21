#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],ord,i,j,det;
    printf("Enter the order of the matrix: ");
    scanf("%d",&ord);
    for(i=0;i<ord;i++){
        for(j=0;j<ord;j++){
            printf("Enter the element: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for(i=0;i<ord;i++){
        for(j=0;j<ord;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    if(ord==3){
        det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
        printf("Determinant of the above matrix=%d",det);
    }
    else if(ord==2){
        det=a[0][0]*a[1][1]-a[1][0]*a[0][1];
        printf("Determinant of the above matrix=%d",det);
    }
    else if(ord==1){
        det=a[0][0];
        printf("Determinant of the above matrix=%d",det);
    }
    else{
        printf("Sorry I am only able to solve determinants of matrices upto 3rd order");
    }

    return 0;
}
