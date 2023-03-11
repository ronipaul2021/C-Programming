# Programming_in_C
C language 
#include<stdio.h>
int main()
{  
    int m,n,o,p,i,j,k,sum=0;
    printf("Enter number of row of the first matrix : ");
    scanf("%d",&m);
    printf("Enter number of column of the first matrix : ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter elements of the first matrix :\n");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    }
    printf("Enter number of row of the second matrix : ");
    scanf("%d",&o);
    printf("Enter number of column of the second matrix : ");
    scanf("%d",&p);
    int b[o][p],c[m][p];
    printf("Enter elements of the second matrix :\n");
    for(i=0;i<o;i++){
    for(j=0;j<p;j++)
    scanf("%d",&b[i][j]);
    }
    if(n!=o){
    printf("Matrix multiplication is not possible with entered matrices.");
    goto end;
    }
    for(i=0;i<m;i++){
    for(j=0;j<p;j++){
    for(k=0;k<n;k++)
    sum=sum+a[i][k]*b[k][j];
    c[i][j]=sum;
    sum=0;
    }
    }
    printf("Answer :\n");
    for(i=0;i<m;i++){
    for(j=0;j<p;j++)
    printf("%d ",c[i][j]);
    printf("\n");
    }
end : 
    return 0;
}
