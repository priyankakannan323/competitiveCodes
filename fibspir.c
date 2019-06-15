#include<stdio.h>
int main(){
    int r=-1,m=0,l=0,n=0,i,f=0,f1=0,f2=1,cur=0,key;
    scanf("%d",&key);
    while(n<=3){
        m++;
     for(i=r+1;i<=m;i++){
            cur=f1+f2;
            if(f1==key){
                printf("(%d  %d)  ",i,l);
                return 0;
            }
            f1=f2;
            f2=cur;
     }
     if(f==0){
        r++;
        f=1;
     }
     n++;
     for(i=l+1;i<=n;i++){
            cur=f1+f2;
            if(f1==key){
                printf("(%d  %d)  ",m,i);
                return 0;
            }
            f1=f2;
            f2=cur;
     }
     r--;
     for(i=m-1;i>=r;i--){
            cur=f1+f2;
            if(f1==key){
                printf("(%d  %d)  ",i,n);
                return 0;
            }
            f1=f2;
            f2=cur;

     }
     l--;
     for(i=n-1;i>=l;i--){
            cur=f1+f2;
            if(f1==key){
                printf("(%d  %d)  ",r,i);
                return 0;
            }
            f1=f2;
            f2=cur;
    }
    }
}
