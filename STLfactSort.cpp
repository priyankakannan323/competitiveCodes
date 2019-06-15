#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
struct element{
    int index;
    int no_of_fact;
};
int countFact(int a){
    int n=sqrt(a),countt=0;
    if((n*n)==a)
        countt++;
        //return countt;

    for(int i=1;i<sqrt(a);i++){
        if(a%i==0)
          countt+=2;

    }
    return countt;
}
bool compare(struct element s1,struct element s2){
    if(s1.no_of_fact==s2.no_of_fact){
        return (s1.index < s2.index);
    }
    return s1.no_of_fact>s2.no_of_fact;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    struct element num[n];
    for(i=0;i<n;i++){
        num[i].index=i;
        num[i].no_of_fact=countFact(a[i]);
    }
    sort(num,num+n,compare);
    for(i=0;i<n;i++){
        printf("%d ",num[i].no_of_fact);
    }
}
