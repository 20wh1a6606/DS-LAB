#include<stdio.h>
int binary_search(int a[],int n,int key,int high,int low);
int main(){
    int a[20],n,i,key,pos = 0,high,low;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i = 0;i < n;i++){
           scanf("%d",&a[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    pos = binary_search(a,n,key,high,low);
    if(pos == -1){
         printf("element not found");
     }
    else{
         printf("element found at %d pos",pos);
int binary_search(int a[20],int n,int key,int high,int low){
    int mid;
    while(high >= low){
          mid = (high + low)/2;
          if(a[mid] < key){
               low = mid + 1;
               return binary_search(a[],n,key,high,low);
          }
          else if(a[mid] > key){
                  high = mid - 1;
                  return binary_search(a[],n,key,high,low);
          }
          else if(a[mid] == key){
                  return mid;
          }
          return -1
    }
}

