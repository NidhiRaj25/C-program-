// #include<stdio.h>
// int main()
// {
//    int i;
//    for(i=0; i<10; i++)
//    {
//        printf("i=%d\n",i);
//    }
//    return 0; 
// }

//..............................................................................................

// #include<stdio.h>
// int main(){
//     int i=0;
//     while(i<10)
//     {
//         printf("i=%d\n",i);
//         i++;
//     }
//     return 0;
// }

//..........................................................................

// #include<stdio.h>
// int main()
// {
//     int i=10;
//     do
//     {
//         printf("i=%d\n",i);
//         i--;
//     } while (i>0);

//     return 0;
    
// }

//...............................................................................
 
//  #include<stdio.h>
//  int main()
//  {
//      unsigned int i=500;
//      while(i++ !=0);
//      printf("%d",i);
//      return 0;
//}

//  EXPLANATION :
//  Range of unsigned int(4 bytes) 0 to 4294967295.
//  When i reaches 4295967295,then because of i++, it comes back again to 0.
//  As 0 not equal to 0 is false therefore we come outside of the while loop.
//  After we come out of the loop, i will contain 1 because of post increment operator.therefore,1 will be printed.

//.................................................................................................................................................................................

// #include<stdio.h>
// int main()
// {
//     int x=3;
//     if(x==2); x=0;
//     if(x==3) x++;
//     else x+=2;

//     printf("x=%d",x);
//     return 0;

// }

//............................................................................

//how many times "hello, world"  printed.

// #include<stdio.h>
// int main(){
//     int i=1024;
//     for(;i;i>>=1)       // >>= right shift operator (i=i>>1)
//     printf("hello,world\n");
//     return 0;
// }

// i=1024
// 1024 = 100 0000 0000
// 512  = 010 0000 0000
// 256  = 001 0000 0000
//      = 000 1000 0000
//      = 000 0100 0000
//      = 000 0010 0000
//      = 000 0001 0000
//      = 000 0000 1000
//      = 000 0000 0100
//      = 000 0000 0010
//   1  = 000 0000 0001

//this is why hello world printed 11th times.

//......................................................................................

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0; i<20; i++)
//     {
//         switch(i)
//         {
//             case 0: i+=5;
//             case 1: i+=2;
//             case 5: i+=5;
//             default: i+=4;
//         }
//         printf("%d ",i);// 1st loop i=16 then because of post incrementation i=16+1=17,17<20,default i=17+4=21
//     }
// }

// here there is no break; after cases . if break; were present output will be 5 10 15 20.
//bcz of there is no break; all the cases are evaluated . 

//....................................................................................................................................

// How many times will nidhi be printed .

// #include<stdio.h>
// int main()
// {
//     int i=-5;
//     while(i<=5)
//     {
//         if(i>=0)
//           break;
//         else
//         {
//             i++;
//             continue;
//         }
//         printf("Nidhi");
//     }
//     return 0;
// }

// output = 0 times

//.......................................................................................

// #include<stdio.h>
// int main()
// {
//     int i = 0;
//     for(printf("one\n"); i<3 && printf(""); i++)
//     {
//         printf("Hi!\n");
//     }
//     return 0;
// }

//..................................................................................................

// PETTERNS ----

    //  1 2 3 4 5 
    //  1 2 3 4 5 
    //  1 2 3 4 5 
    //  1 2 3 4 5

// #include<stdio.h>

// void main()
// {
//     int i, j;
//     for(i=1; i<=4; i++)
//     {
//     for(j=1; j<=5; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

//-------------------------------------------------------------------------


//  1 1 1 1 1 
//  2 2 2 2 2 
//  3 3 3 3 3 
//  4 4 4 4 4 

// #include<stdio.h>

// void main()
// {
//     int i, j;
//     for(i=1; i<=4; i++)
//     {
//     for(j=1; j<=5; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// } 

//----------------------------------------------------------------

    // *****
    // *****
    // *****
    // *****

// #include<stdio.h>

// void main()
// {
//     int i, j;
//     for(i=1; i<=4; i++)
//     {
//     for(j=1; j<=5; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//------------------------------------------------------------------------

    //   A B C D E 
    //   A B C D E
    //   A B C D E
    //   A B C D E

// #include<stdio.h>

// void main()
// {
//     int i, j;
//     for(i=1; i<=4; i++)
//     {
//     for(j=1; j<=5; j++)
//         {
//             printf("%c ",j+64);
//         }
//         printf("\n");
//     }
// }

//---------------------------------------------------------------

    //   ♣ ♦ ♥ ☻ ☺ 
    //   ♣ ♦ ♥ ☻ ☺
    //   ♣ ♦ ♥ ☻ ☺
    //   ♣ ♦ ♥ ☻ ☺
    //   ♣ ♦ ♥ ☻ ☺


// #include<stdio.h>

// void main()
// {
//     int i, j;
//     for(i=1; i<=5; i++)
//     {
//     for(j=5; j>=1; j--)
//         {
//             printf("%c ",j  );
//         }
//         printf("\n");
//     }
// }

//-----------------------------------------------------------------------------

    // 5 4 3 2 1 
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1 
    // 5 4 3 2 1

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=1; i<=5; i++)
//     {
//     for(j=5; j>=1; j--)
//         {
//             printf("%d ",j  );
//         }
//         printf("\n");
//     }
// }


//-------------------------------------------------------------------------------

    // 5 5 5 5 5 
    // 4 4 4 4 4
    // 3 3 3 3 3
    // 2 2 2 2 2
    // 1 1 1 1 1

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=5; i>=1; i--)
//     {
//     for(j=1; j<=5; j++)
//         {
//             printf("%d ",i );
//         } 
//         printf("\n");
//     }
// }

//-------------------------------------------------------------------------------------------
    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=1; i<=5; i++)
//     {
//     for(j=1; j<=i; j++)
//         {
//             printf("%d ",j );
//         }
//         printf("\n");
//     }
// }

//-------------------------------------------------------------

    // 1 
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=1; i<=5; i++)
//     {
//     for(j=1; j<=i; j++)
//         {
//             printf("%d ",i );
//         }
//         printf("\n");
//     }
// }

//---------------------------------------------------------------------------------

    // *
    // **
    // ***
    // ****
    // *****

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=1; i<=5; i++)
//     {
//     for(j=1; j<=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//---------------------------------------------------------------------------------------------

    // A 
    // A B
    // A B C
    // A B C D
    // A B C D E

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=1; i<=5; i++)
//     {
//     for(j=1; j<=i; j++)
//         {
//             printf("%c ", j+64);
//         }
//         printf("\n");
//     }
// }

//--------------------------------------------------------------------------------------------

    // 5 
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=5; i>=1; i--)
//     {
//     for(j=5; j>=i; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

//---------------------------------------------------------------------------------------------------


// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
    
// #include<stdio.h>
// void main() 
// {
//     int i, j;
//     for(i=5; i>=1; i--)
//     {
//     for(j=1; j<=i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

//-----------------------------------------------------------------------------------------

// #include<stdio.h>
// void main()
// {
//     int i, j;
//     for(i=5; i>=1; i--)
//     {
//     for(j=5; j>=i; j--)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

// ------------------------------------------------------------------------------------------------------------------

//     *
//    ***
//   *****
//  *******
// ********* 


// #include<stdio.h>
// void main()
// {
//     int i, j,k,l,n;
//     printf("enter the number");
//     scanf("%d",&n);

//     for(i=0;i<n;i++) {

//         for(j=0;j<n-i-1;j++){
//             printf(" ");
//         }

//         for(k=0;k<2*i+1;k++){
//             printf("*");
            
//         }   
//         //   for(j=0;j<n+i-1;j++){
//         //     printf(" ");
//         // }
//         printf("\n");
//         }
        
//     }

// -------------------------------------------------------------------------------------------------------------------------


// *********
//  *******
//   *****
//    ***
//     *


// #include<stdio.h>
// void main()
// {
//     int i, j,k,l,n;
//     printf("enter the number");
//     scanf("%d",&n);

//     for(i=0;i<n;i++) { 

//         for(j=0;j<i;j++){
//             printf(" ");
//         }

//         for(k=0;k<2*n-(2*i+1);k++){
//             printf("*");
            
//         }   
//           for(j=0;j<i;j++){
//             printf(" ");
//         }
//         printf("\n");
//         }
        
//     }



// ..........................................................................................................

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

// #include<stdio.h>
// void main()
// {
//     int i, j,k,l,n;
//     printf("enter the number");
//     scanf("%d",&n);


//     for(i=0;i<n;i++) {

//         for(j=0;j<n-i-1;j++){
//             printf(" ");
//         }

//         for(k=0;k<2*i+1;k++){
//             printf("*");
            
//         }   
//           for(j=0;j<n-i-1;j++){
//             printf(" ");
//         }
//         printf("\n");
//         }

//     for(i=0;i<n;i++) { 

//         for(j=0;j<i;j++){
//             printf(" ");
//         }

//         for(k=0;k<2*n-(2*i+1);k++){
//             printf("*");
            
//         }   
//           for(j=0;j<i;j++){
//             printf(" ");
//         }
//         printf("\n");
//         }

        
//     }

// -------------------------------------------------------------------------------------------------------

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// #include<stdio.h>
// void main()
// {
//     int i, j,k,l,n;
//     printf("enter the number");
//     scanf("%d",&n);

//     for(i=1;i<=2*n-1;i++) { 

//         int stars=i;
//         if(i>n) stars=2*n-i;
        
//         for(j=1;j<=stars;j++){
//             printf("*");
//         }
//         printf("\n");
//         }
        
//     }


 //-------------------------------------------------------------------------------------------------------

//find factorial of a number using for loop.

// #include<stdio.h>
// int main()
// {
//     int fact,i ,n;
//     fact = 1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         fact = fact*i;
//     }
//     printf("Factorial of %d is %d", n, fact);
    
//     return 0;
// }

    //  EXPLANATION:
    // suppose n = 5 i.e i<=5
    // fact = fact*i
    //     1= 1*1
    //     2= 1*2
    //     6= 2*3
    //     24= 6*4
    //     120 = 24*5

//......................................................................................................
 
    
       //  print the Fibonacci series using while loop.
       //The Fibonacci numbers are the numbers in the following integer sequence.
       //0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

    // #include<stdio.h>
    // int main()
    // {
    //     int a=0,b=1,c,i=1,num;
    //     printf("Enter the number of terms : ");
    //     scanf("%d", &num);

    //     while(i<=num) 
    //     {
    //         printf("%d ",a);
    //         c=a+b;
    //         a=b;
    //         b=c;
    //     i++;
    //     }
      
    //   return 0;
    // }

    //.............................................................................................................. 
    
    //find the given no is palindrome or not
    // A palindrome number is a number that is same after reverse.
    //ex - 121, 34543, 343, 131
    
    // #include<stdio.h>
    // int main()
    // {
    //     int n,rem,q, result=0;
    //     printf("enter the no: ");
    //     scanf("%d",&n);
    //     q=n;
    //     while(q!=0)
    //     {
    //         rem=q%10;
    //         result=result*10+rem;
    //         q=q/10;
    //     }
    //     if(result==n)
    //        printf("its a palindrome");
    //     else
    //         printf("no! its not a palindrome");

    //         return 0;

    // }
 
//......................................................................................

// Program to find Sum of Digits of a Number

// #include<stdio.h>
// int main()
// {
//     int n, rem , q, sum=0;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     q=n;
//     while(q>0)
//     {
//     rem=q%10;
//     sum=sum+rem;
//     q=q/10;
//     }

//     printf("sum is=%d",sum);
//     return 0;
// }

//....................................................................................................

// program to reverse a number

// #include<stdio.h>
// int main()
// {
//     int i,n,rem,result=0,q;
//     printf("Enter the number : ");
//     scanf("%d", &n);
    
//     q=n;
//     while(q!=0)
//     {
//         rem=q%10;
//         result=result*10+rem;
//         q=q/10;

//     }
//     printf("the reverse of this number is : %d",result);
//     return 0;

// }

//..............................................................................................

// program to reverse of a string

// #include<stdio.h>
// int main()
// {
//     char str[20],rev[20]; 
//     int i,j;
//     printf("Enter any sting : ");
//     scanf("%s",str);

//     int count=0;
//     while(str[count]!=0) 
//     {
//         count++;
//     }
//     printf("the length of this string is %d\n",count);
//     j = count-1;
    
   
//     for(i=0; i<count; i++)
//     {
//         rev[i] = str[j];
        
//         j--;
//     }
//     printf("string after revers :%s",rev);
// }

// by using swapping

// #include<stdio.h>
// int main()
// {
//     char str[20],rev[20],ch; 
//     int i,j,count=0;
//     printf("Enter any sting : ");
//     scanf("%s",str);

//     while(str[count]!=0) 
//     {
//         count++;
//     }
//     printf("the length of this string is %d\n",count);
   
//     for(i=0; i<count/2; i++)
//     {
//         ch=str[i];
//         str[i]=str[count-1-i];
//         str[count-1-i]=ch;
//     }
//     printf("string after revers :%s",str);
// }

// -------------------------------------------------------------------------------------------------------------------------

// Given a number N. Count the number of digits in N which evenly divides N.

// Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

// #include<stdio.h>
//     int main()
//     {
//         int n,rem,q, count=0;
//         printf("enter the no: ");
//         scanf("%d",&n);
//         q=n;
//         while(q!=0)
//         {
//         rem=q%10;
//         if(rem==0){
//         // q=q/10;
//         continue;
//         }
        
//         if(n%rem==0){
//             count++; 
//         }
//         q=q/10;
//         }
//         printf("%d", count);
        
//     }

// --------------------------------------------------------------------------------------------------------------------------------------------------
    
// #include<stdio.h>
//     int main()
//     {
//         int N,rem,q;
//         printf("enter the no: ");
//         scanf("%d",&N);
//         int count=0;
//         int temp = N;
//         while(N>0){
//             int last = N%10;
//             if(last==0){
//                 N=N/10;
//                 continue;
//             }
//             if(temp%last==0){
//                 count++;
//             }
//             N=N/10;
//         }
//         printf( "%d",count);
//     }