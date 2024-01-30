#include<stdio.h>
#include<stdlib.h>

void knapsack(int n, float weight[],float profit[],float capacity) {  
     float x[20],tp=0;
     int i,j,u;
     u=capacity;

     for(i=0;i<n;i++)
        x[i]=0.0;

     for(i=0;i<n;i++){
         if(weight[i]>u)
            break;
         else{
             x[i]=1.0;
             tp=tp+profit[i];
             u=u-weight[i];
         }
     }  

     if(i<n)
        x[i]=u/weight[i];

    tp=tp+(x[i]*profit[i]);

    printf("\nThe result vector is: ");
    for(i=0;i<n;i++)
        printf("%f\t",x[i]);

    printf("\nMaximum profit is : %f",tp);

}

int main(){
    int i,j;
    float ratio[20],temp;
    float profit[] = { 10,5,15,7,6,18,3 };
    float weight[] = { 2,3,5,7,1,4,1};
    float capacity = 15;
    int num = sizeof(profit) / sizeof(profit[0]);
    // float weight[20],profit[20],capacity;
    // int i,j,num;
    // float ratio[20], temp;

    // printf("enter the no of items: ");
    // scanf("%d", &num);

    // printf("\nenter the  profits and weights of each object: \n");
    // for(i=0;i<num ;i++){
    // scanf("%f %f",&profit[i],&weight[i]);
    // }
    // printf("\nenter the capacity of the knapsack: ");
    // scanf("%f",&capacity);

    printf("ratios are :\n");
    for(i=0;i<num;i++)
        {
            ratio[i]=profit[i]/weight[i];
            printf(" %1f\n",ratio[i]);
        }

    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(ratio[i]<ratio[j]){
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;

                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;

            }
        }
    }
    //  printf("order of ratios:\n ");
    //  for(i=0; i<num;  i++){
    //      printf("%f ", ratio[i]);
    //  }
    //  printf("\norder of weights: \n");
    //  for(i=0; i<num;  i++){
    //      printf("%f ", weight[i]);
    //  }
    //  printf("\norder of profits:\n ");
    //  for(i=0; i<num;  i++){
    //      printf("%f ",profit[i]);
    //  }

    knapsack(num,weight,profit ,capacity);

    return 0;
}