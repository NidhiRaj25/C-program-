#include<stdio.h>
#include<stdlib.h>


void Merge(int A[],int low,int mid,int high){
    int i=low,k=low;
    int B[high+1];
    int j=mid+1;

    while (i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }else if(A[i]>A[j]){
            B[k++]=A[j++];
        }   
    }

    while (i<=mid){
       B[k++]=A[i++];
    }  
    while(j<=high){
        B[k++]=A[j++];
    }
    for(int i=low;i<=high;i++){
        A[i]=B[i];
    }
    
}

void MergeSort(int A[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        // printf("\n%d %d",l,h);
        // printf("\n%d",mid);

        MergeSort(A,l,mid);
        // printf("\n%d %d",l,mid);
        // printf("\n%d",mid);

        MergeSort(A,mid+1,h);
        // printf("\n%d %d",mid+1,h);
        // printf("\n%d",mid);
        Merge(A,l,mid,h);

//         printf("\ndisplay array\n");
//          for(int i=0;i<mid;i++){
//         printf("%d ",A[i]);
//          }
    }
}
     

void Display(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a1[]={2,5,8,12,3,6,7,10};

    int size=sizeof(a1)/sizeof(a1[0]); 
    printf("given array is \n");
    Display(a1,size);
    MergeSort(a1,1,size-1);
    printf("\nsorted array is \n");
    Display( a1,size);
    
}