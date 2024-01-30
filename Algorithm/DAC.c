#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
 
void findMaxMin(int arr[],int low,int high,int max,int min ,int max1,int min1)
 {
     if (high == low){
        
            max = arr[low];
            min= arr[high];
      }
     else
     if (high-low==1){

         if(arr[low]<arr[high]){
             
                 min = arr[low];
                 max = arr[high];
         }
         else{
            
                min = arr[high];
                max = arr[low];
                 
             }
         }
    
     
        else{
        int mid = (low +high)/2;
        findMaxMin(low,mid,max,min);
        findMaxMin(mid+1,high,max1,min1);
        if(max<max1)
        max=max1;
        if(min>min1)
            min=min1;    
        }
 }
  int main(){
     int arr[] = {5,6,4,3,6,7,8,9};
     int max1,min1;
     int max = INT_MAX;
     int min = INT_MIN;
     
     findMaxMin(arr,0,8,max,min,max1,min1);
     printf("max is :%d", max);
     printf("min is :%d", min);
     return 0;

  }