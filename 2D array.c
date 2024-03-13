2D array;


#include <stdio.h>
int b[];
int main()
{
  int n,m,b=0;
  scanf("%d %d",&n,&m);
  int a[n][m];
  for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    scanf("%d",&a[i][j]);
  }}
 
   for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    printf("%d",a[i][j]);}
    printf("\n");
  }
   
  
    
    for(int i=0;i<n;i++){
    b=0;
     for(int j=0;j<m;j++){
    b+=a[i][j];
  }
printf("%d ",b);}
}   