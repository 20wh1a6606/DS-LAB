#include<stdio.h>
int linear_search(int n,int a[],int key);
int main(){
    int a[30],i,n,key,pos;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i = 0;i < n;i++){
         scanf("%d",&a[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    pos = linear_search(n,a,key);
    if(pos == -1){
            printf("element not found");
    else{
            printf("element found at %d",pos);
    }
}
int linear_search(int n,int a[],int key){
    int i;
    for(i = 0;i < n;i++){
          if(a[i] == key){
                  return i;
           }
          else if(i < n){
                  linear_search(n,a,key);
                  i++;
          }
          else if(i > n){
                    return -1;
          }
        }
        return -1;
}
                  

