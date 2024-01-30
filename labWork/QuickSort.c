#include<stdio.h>
#include<limits.h>


void swap(int *a,int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

int partation(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;

    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);

        if(i<j)swap(&A[i],&A[j]);
    }while(i<j);

    swap(&A[l],&A[j]);
    return j;
}

void QuickSort(int A[],int l,int h){
    int j;
    
    if(l<h){
        j=partation(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

void Display(int A[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",A[i]);
    }
}

int main(){
    int A[]={11,13,7,12,16,9,24,5,10,3,INT_MAX},n=11;
    QuickSort(A,0,10);
    Display(A,10); 
}
