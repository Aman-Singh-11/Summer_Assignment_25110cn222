 //WRITE A PROGRAM TO COUNT THE DIGITS IN A NUMBER . 
 #include<stdio.h>
int main(){
    int n,flag=0;
printf("Enter a number : ");
scanf("%d",&n);
while(n!=0){
    n=n/10;
flag ++;
}
printf("Number od digits is = %d",flag);
return 0;

}