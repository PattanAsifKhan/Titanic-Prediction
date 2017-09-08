#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n-1;i++){
printf("%*s",n-i,"*");
if(i>0){
printf("%*s",2*i,"*");
}
printf("\n");
}
for(int j=0;j<n;j++){
printf("* ");
}


}
