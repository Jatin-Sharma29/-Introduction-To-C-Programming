#include <stdio.h>
#include <math.h>
int isprime(int a){
    int i=2,flag=0;
    while(i<=a/2){
        if(a%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        return 1;
    else
        return 0;      
}
int isarmstrong(int a){
    int rem,temp1,temp2,count=0,sum=0;
    temp1=a;
    while(temp1!=0){
        temp1=temp1/10;
        count++;
    }
    temp2=a;
    while(a!=0){
        rem=a%10;
        sum+=(int)pow(rem,count);
        a=a/10;
    }
    if(sum==temp2)
        return 1;
    else
        return 0;
}
int isperfect(int a){
    int sum=0,i=1;
    while(i<=a/2){
        if(a%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==a)
    return 1;
    else 
    return 0;
}
int main(){
    int n,x,y,z;
    printf("Enter number: ");
    scanf("%d",&n);
    x=isprime(n);
    y=isarmstrong(n);
    z=isperfect(n);
    if(x==1)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
    if(y==1)
        printf("%d is an Armstrong number.\n",n);
    else
        printf("%d is not an Armstrong number.\n",n);
    if(z==1)
    printf("%d is a perfect number.\n",n);
    else
    printf("%d is not a perfect number.\n",n);
    return 0;
}