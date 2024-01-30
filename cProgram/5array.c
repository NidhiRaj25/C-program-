//program to print the reverse of an array

#include<stdio.h>
int main()
{
   int n,c,d, a[100];
   printf("enter the no of element in the array: ");
   scanf("%d",&n);
   printf("enter %d elements:\n",n);
   for(c=0;c<n;c++)
       scanf("%d",&a[c]);
    for(c=n-1;c>=0;c--)
    printf("%d ",a[c]);
    return 0;

}

// ......................................................................................................................................................

//Program to insert an element in an Array

// #include<stdio.h>
// int main(){
//     int n,i,array[100],position,num,c;
//     printf("enter the no of element in array: ");
//     scanf("%d",&n);
//     printf("enter %d elements \n",n);
//     for(i=0;i<n;i++){
//        scanf("%d",&array[i]);
//     }
//     printf("enter the position where you want to insert:");
//     scanf("%d",&position);
//     printf("enter the no you want to insert:");
//     scanf("%d",&num);

//     for(c=n-1;c>=position-1;c--)
//         array[c+1]=array[c];

//     array[position-1]=num;
    
//     printf("resultant array is:");
//     for(c=0;c<=n;c++)
//         printf("%d ",array[c]);
    
//     return 0;
// }

//.................................................................................................................................

//Program to delete an element in an Array.

// #include<stdio.h>
// int main()
// {
//     int n,i,arr[100],position;
//     printf("enter the no of element in an array:");
//     scanf("%d",&n);
//     printf("enter %d elements :",n);
//     for(i=0;i<n;i++)
//       scanf("%d",&arr[i]);
    
//     printf("enter the postion where you want to delete element from: ");
//     scanf("%d",&position);

//     if(position>=n+1)
//        printf("deletion not possible\n");
//     else
//     for(int c=position-1;c<n-1;c++)
//       arr[c]=arr[c+1];

//      for(int c=0;c<n-1;c++)
//         printf("%d",arr[c]);

//     return 0;
     

// }

//...........................................................................................................................................................

// Program to find Largest and Smallest Element in an Array

// #include<stdio.h>
// int main(){
//   int n,arr[100],big,small;
//   printf("enter the no of element in an array:");
//   scanf("%d",&n);
//   printf("enter the %d element :\n",n);
  
//   for(int i=0;i<n;i++)
//   scanf("%d",&arr[i]);
   
//   big=arr[0];
//   for(int i=1;i<n;i++)
//     {
//       if(big<arr[i])
//       {
//         big=arr[i];
//       }
//     }
//   printf("\n the largest element is: %d",big);

//   small=arr[0];
//   for(int i=1;i<n;i++)
//   {
//     if(small>arr[i])
//     {
//       small=arr[i];
//     }
//   }
//   printf("\nthe smallest element is: %d",small);
//   return 0;
// }

//.......................................................................................................................

//Program to find Sum of N input Numbers using Array

// #include<stdio.h>
// int main(){
//   int n,i,a[50],sum=0;
//   printf("enter the no you want to add: ");
//   scanf("%d",&n);
//   printf("enter %d nos:\n",n);
//   for(i=0;i<n;i++)
//   scanf("%d",&a[i]);

//   for(int c=0;c<=n-1;c++)
//   {
//     sum+=a[c];

//   }
//   printf("sum:%d",sum);
//   return 0;
// }

// ......................................................................................

// Simple Program to Sort Array elements.

// #include<stdio.h>
// int main(){
//   int n,i,a[50],sum=0,temp,j;
//   printf("enter the no of element: ");
//   scanf("%d",&n);
//   printf("enter %d elements:\n",n);
//   for(i=0;i<n;i++)
//   scanf("%d",&a[i]);

//      for (i = 0; i < n; ++i){
//       for (j = i + 1; j < n; ++j){
//          if (a[i] > a[j]){
//             temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//          }
//       }
//    }
//    printf("SORTED ELEMENTS:\n");
//    for(i=0;i<n;i++)
//    printf("%d\n",a[i]);
//    return 0;
// }

//.........................................................................................................................................................

// Simple Program to remove Duplicate Element in an Array.

// #include<stdio.h>
// int main(){
//   int n,i,a[50],sum=0,temp,j,k;
//   printf("enter the no of element: ");
//   scanf("%d",&n);
//   printf("enter %d elements:\n",n);
//   for(i=0;i<n;i++)
//   scanf("%d",&a[i]);

//   for(i=0;i<n;i++){
//     for(j=i+1;j<n;j++){
//       if(a[i]==a[j])
//       {
//         for(k=j;k<n-1;k++){
//          a[k]=a[k+1];
//         }
//         n--;
//         j--;
//       }
//     }
//   }
  
//   printf("array element after deletion of the duplicate elements:");
//   for(i=0;i<n;i++)
//   {
//     printf("%d",a[i]);

//   }
//   return 0;
// }

//................................................................................................................................

//Program to check whether a two dimensional array is a Sparse Matrix
//A Sparse Matrix is a matrix(two-dimensional array) in which number of 0's is greater than the number of non-zero elements.

// #include<stdio.h>
// int main(){
//   int i,j,n,m,mat[10][10],count=0;
//   printf("enter the no of rows and columns:");
//   scanf("%d%d",&m,&n);

//   printf("enter the %d elements:",m*n);
//   for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//       scanf("%d",&mat[i][j]);
//       if(mat[i][j]==0)
//       count=count+1;

//     }
//   }

//   printf("entered matrix elements are:\n");
//   for(i=0;i<m;i++){
//     for(j=0;j<n;j++){

//       printf("%d\t",mat[i][j]);
//     }
//     printf("\n");
//   }

//   if(count>(m*n)/2)
//     printf("\nthe entered matrix is a spars matrix");
//   else
//      printf("\nthe entered matrix is not a spars matrix");
  
//   return 0;
// }

//.......................................................................................................................................

// Program to check whether given Square Matrix is symmetric or not.

// A Square Matrix is said to be symmetric if it is equal to it's transpose.
// Transpose of a matrix is achieved by exchanging indices of rows and columns.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,j,n,mat1[10][10],mat2[10][10],count=1;
//     printf("enter the no of rows and columns:");
//     scanf("%d%d",&n,&n);

//     printf("\nenter the %d elements:\n",n*n);
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//         scanf("%d",&mat1[i][j]);
//         }
//     }

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             mat2[i][j]=mat1[j][i];
//         }
//     } 

//     printf("\nthe original matrix is :\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//         printf("%d\t",mat1[i][j]);
//         }
//     printf("\n");
//     }
//      printf("\nthe transpose matrix is :\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//         printf("%d\t",mat2[i][j]);
//         }
//     printf("\n");
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//         if(mat1[i][j]!=mat2[i][j]){
//             printf("\n matrix is not  symmetric"); 
//              exit(0); 
//             }       
//         }
        
//     }
//      printf("\n matrix is  symmetric"); 
//     return 0;
// }

// ........................................................................................................

// Program to find Deteminant of 2x2 Matrix.

// #include<stdio.h>
// int main(){
//     int i,j,mat[2][2];
//     long determinant;
//     printf("enter the elements of matrix: ");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }

//     determinant=mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
//     printf("\ndeterminant of 2*2 matrix is :%d",determinant);
//     return 0;
// }

// .........................................................................................................................................

// Program to find Deteminant of 3*3 Matrix.

// #include<stdio.h>
// int main(){
//     int i,j,mat[3][3],d1,d2,d3;
//     long determinant;
//     printf("enter the elements of matrix: ");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     int minorMat1(){
//         d1=mat[1][1]*mat[2][2]-mat[2][1]*mat[1][2];
//         return d1;
//     }
//     int minorMat2(){
//         d2=mat[1][0]*mat[2][2]-mat[2][0]*mat[1][2];
//         return d2;
//     }
//     int minorMat3(){
//         d3=mat[1][0]*mat[2][1]-mat[2][0]*mat[1][1];
//         return d3;
//     }

//     determinant=mat[0][0]*minorMat1()-mat[0][1]*minorMat2()+mat[0][2]*minorMat3();
//     printf("determinant of given 3*3 matix is : %d",determinant);
 
//     return 0; 
// }    

//.....................................................................................................................................

// Find Normal and Trace of a Square Matrix.
//  The square root of the sum of the squares of each element of the matrix is said to be Normal of a matrix.
// The sum of the diagonal elements of a matrix is called Trace. 

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,i,j,mat[100][100], sum1=0,sum2=0;
//     printf("enter the no of elements in square matrix:");
//     scanf("%d",&n);

//     printf("enter %d elements :",n*n);
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){

//             sum1=sum1+mat[i][j]*mat[i][j];
//         }
//     }
//     printf("sum is %d",sum1);

//     int normal= sqrt((double)sum1);
//     printf("\n the normal of the given matrix is : %d",normal);

//     for(i=0;i<n;i++)
//         {
//             sum2=sum2+mat[i][i];
//         }
//     printf("\n the trace of the given matrix is : %d",sum2);
//     return 0;

// }

// .......................................................................................................................................................
// Program to perform addition and subtraction of Matrices.

// #include<stdio.h>
// int main(){
//     int m,n,a,b,i,j,mat1[100][100],mat2[100][100] ,sum[100][100],sub[100][100];
//     printf("enter the rows and columns of both the matrix:");
//     scanf("%d%d %d%d",&m,&n,&a,&b);
//     printf("enter the %d elements:",m*n);
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//         scanf("%d",&mat1[i][j]);
//         }
//     }

//     printf("entered 1st matrix elements are:\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//         printf("%d\t",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("enter the %d elements:",a*b);
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//         scanf("%d",&mat2[i][j]);
//         }
//     }

//     printf("entered 2nd matrix elements are:\n");
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//         printf("%d\t",mat2[i][j]);
//         }
//         printf("\n");
//     }
    
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//        sum[i][j]=mat1[i][j]+mat2[i][j];
//         }
//     }
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//        sub[i][j]=mat1[i][j]-mat2[i][j];
//         }
//     }
//     printf("addtion of the matries is:\n");
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//         printf("%d\t",sum[i][j]);
//         }
//     printf("\n");
//     }

//     printf("substraction of the matries is :\n");
//     for(i=0;i<a;i++){
//         for(j=0;j<b;j++){
//         printf("%d\t",sub[i][j]);
//         }
//     printf("\n");
//     }
    
    
// }

// ...................................................................................................................................................

// Program for Matrix Multiplication.

// #include<stdio.h>
// int main(){
//     int m,n,a,b,i,j,k,mat1[100][100],mat2[100][100] ,multi[100][100],sum=0;
//     printf("enter the rows and columns of both the matrix:");
//     scanf("%d%d %d",&m,&n,&a);
//     printf("enter the %d elements:",m*n);

//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//         scanf("%d",&mat1[i][j]);
//         }
//     }

//     printf("entered 1st matrix elements are:\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//         printf("%d\t",mat1[i][j]);
//         }
//         printf("\n");
//     }
    
//     printf("enter the %d elements:",n*a);
//     for(i=0;i<n;i++){
//         for(j=0;j<a;j++){
//         scanf("%d",&mat2[i][j]);
//         }
//     }

//     printf("entered 2nd matrix elements are:\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<a;j++){
//         printf("%d\t",mat2[i][j]);
//         }
//         printf("\n");
//     }
    
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<a;j++){
//             for(k=0;k<n;k++)
//             {
//                 sum = sum+mat1[i][k]*mat2[k][j];
//             }

//             multi[i][j]=sum;
//             sum=0; 
           
//         }
//     }

//     printf("multipication of given matrix is : \n");
//     for(i=0;i<m;i++){
//         for(j=0;j<a;j++){
//             printf("%d\t",multi[i][j]);
//         }
//         printf("\n");
//     }

     
// }