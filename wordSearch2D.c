#include<stdio.h>
#include<string.h>
#define R 3
#define C 14
 char grid[R][C]={
        "GEEKSFORGEEKS",
        "GEEKSQUIZGEEK",
        "IDEQAPRACTICE"
    };
void searchWord(char *a){
    int len=strlen(a);
    int row[8]={0,1,0,-1,1,1,-1,-1};
    int col[8]={1,0,-1,0,1,-1,1,-1};
    int i,j,k,dir;
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            k=0;
            for(dir=0;dir<8;dir++){
                if(grid[i][j]==a[k]){
                int ro=i,co=j;
                for(k=1;k<len;k++){
                   ro+=row[dir];
                   co+=col[dir];
                   if(grid[ro][co]!=a[k]){
                        break;
                    }
                }
                if(k==len){
                    printf("(%d,%d)",i,j);
                }
                }
            }
        }
    }

}
int main(){
    char str[50];
    printf("Enter word to search :");
    scanf("%s",str);
    searchWord(str);
    return 0;
}
