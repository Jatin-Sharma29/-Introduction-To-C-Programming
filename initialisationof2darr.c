#include<stdio.h>
int main(){
    int marks[4][3]={{12,14,15},{16,17,18},{19,20,21},{22,23,24}};
    for(int i=0;i<4;i++){           // for rows(because in horizontal reading row doesn't change frequently but col change frequently)
        for(int j=0;j<3;j++){       // for columns
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}