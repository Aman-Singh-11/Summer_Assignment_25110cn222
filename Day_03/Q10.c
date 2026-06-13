 // WRITE A PROGRAM TO PRINT PRIME NUMBERS IN A RANGE .
 #include<stdio.h>
 int main (){
int i,j,N1,N2,prime;
printf("Enter starting Number N1 :");
scanf("%d", &N1);
printf("Enter starting Number N2 :");
scanf("%d", &N2);
for(i=N1;i<=N2;i++){
    if(i<=1)
    continue;
    prime=1;
for(j=2;j<i;j++){
if(i%j==0){
prime=0;
break;
}
}
if(prime==1){
printf("%d ", i);
}
}
return 0;
}
