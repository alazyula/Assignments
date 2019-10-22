#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
void main(){
printf("Lutfen sayi giriniz\n");
int sayi=0;
scanf("%d",&sayi);
int cid=fork();
if(cid==0){
while(sayi!=1){
if(sayi%2==1){
sayi=3*sayi+1;}
else{
sayi=sayi/2;
}
printf("%d\n",sayi);
}
}
else{
waitpid(cid,0,0);}
exit(0);}

