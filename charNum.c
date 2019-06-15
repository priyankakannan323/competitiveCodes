#include<stdio.h>
#include<string.h>
int isAlpha(char a){
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char a[100];
    scanf("%s",a);
    int l,i,len,st,j=0,k,num;
    for(i=0;i<strlen(a);i=k){
        if(isAlpha(a[i])){
          num=0;
          st=i;
          len=1;
          for(j=i+1;j<strlen(a);j++){
            if(isAlpha(a[j])){
                len++;
            }
            else{
                break;
            }
          }
         for(k=j;k<strlen(a);k++){
            if(!isAlpha(a[k])){
                num=(num*10)+(a[k]-48);
            }
            else{
                break;
            }
         }
        for(int n=0;n<num;n++){
            for(int m=st;m<st+len;m++){
                printf("%c",a[m]);
            }
        }
        }
    }
}
