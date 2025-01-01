#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int arre[T],arrl[T];
    for(int i=0;i<T;i++){
        scanf("%d",&arre[i]);
    }
    for(int i=0;i<T;i++){
        scanf("%d",&arrl[i]);
    }
   int cur_students=0, max_students=0;
   for(int i=0;i<T;i++){
       cur_students+=arre[i];
       cur_students-=arrl[i];
       if(cur_students>max_students){
           max_students=cur_students;
       }
   }
    printf("%d",max_students);
    
    return 0;
}