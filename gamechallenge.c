#include<stdio.h>
int main(){
    int n,p1=0,p2=0;
    int max_lead=0,winner=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        p1+=a;
        p2+=b;
        int lead;
        if(p1>p2){
            lead=p1-p2;
        if(lead>max_lead){
            max_lead=lead;
            winner=1;
        }
        }
        else{
        lead=p2-p1;
        if(lead>max_lead){
        max_lead=lead;
        winner=2;
    }
 }
    }
 printf("%d %d",winner,max_lead);
    return 0;
}
