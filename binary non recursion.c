/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int binary_search(int [],int,int);
int main(){
    int a[20],n,i,key,pos;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i = 0;i < n;i++){
          scanf("%d",&a[i]);
    }
    printf("enter the key");
    scanf("%d",&key);
    pos = binary_search(a,n,key);
    if(pos == -1){
           printf("element not found");
    }
    else{
           printf("element found at %d pos",pos);
    }
}
int binary_search(int a[20],int n,int key){
    int low = 0,high = n - 1,mid;
    while(high >= low){
        mid =  (high + low)/2;
    
            if(a[mid] < key){
            low = mid +1;
            }
            else if(a[mid] > key){
                 high = mid - 1;
             }
            else
                 return mid;
    }
            return -1;
}


