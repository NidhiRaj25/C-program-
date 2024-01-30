// Program to find average of N Numbers

// #include<stdio.h>
// int main()
// {
//     int n,num, count,sum =0;
//     float avg ;
//     printf("enter the numbers of elements: ");
//     scanf("%d",&n);
//     printf("enter the %d elements\n",n);
//     for(count=1; count<=n; count++)
//     {
//         scanf("%d",&num);
//         sum= sum+num;
//     }
//     avg = sum/n;
//     printf("sum=%d\n Average = %.2f\n",sum,avg);

//     return 0;
// }

//..........................................................................................................

// A number is armstrong number or not.
// a number that is equal to the sum of cubes of its digits
// 153 = (1*1*1)+(5*5*5)+(3*3*3)

// #include<stdio.h>
// int main()
// {
//     int count=0, i,n,rem,result=0;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     int q=n;

//     while(q!=0)
//     {
//       rem=q%10;
//       result=result+rem*rem*rem;
//       q=q/10;
//     }

//       if(result==n)
//          printf("%d is an armstrong number", n );
//       else
//          printf("%d is not an armstrong number",n);
//      return 0;
// }

//......................................................................................................

// C Program to Check Whether a Number is Even or Odd

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     if(n%2==0)
//         printf("%d  is an even number",n);
//     else
//         printf("%d is an oddd no",n);

//    return 0;
// }

// by using bitwise operator

// #include<stdio.h>
// int main()
// {
//   int x;
//   for(x=0; x<=10; x++)
//   {
//       if(x&1)
//       printf("%d is odd\n",x);
//       else if(!(x&1))
//       printf("%d is even\n",x);
//   }
//   return 0;
// }

//................................................................................................

// Program to find Factors of a Number

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("enter the no: ");
//     scanf("%d",&n);

//     printf("factors of %d are\n",n);
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//           printf("%d\n",i);
//     }
//     return 0;
// }

//..................................................................................

// Program to find Sum of N input Numbers in C

// #include<stdio.h>
// int main()
// {
//     int n,i, sum=0, c;
//     printf("Enter the number you want to add: ");
//     scanf("%d",&n);
//     printf("Enter %d numbers\n",n);
//     for(i=1; i<=n; i++)
//     {
//        scanf("%d",&c);
//        sum=sum+c;
//     }
//     printf("sum of %d numbers is :  %d ",n,sum);
//     return 0;
// }

//...........................................................................................................

// Program to find first N Prime Numbers

// #include<stdio.h>
// int main()
// {
//     int n,i=3,count, x;
//     printf("enter the terms of prime no: ");
//     scanf("%d",&n);

//     if(n>=1)
//     // {
//     //     printf("First %d prime nos are: ",n);
//     //     printf("2 ");
//     // }

//     for(count=2; count<=n; i++)

//     {
//         for(x=2; x<i; x++)
//         {
//             if(i%x==0)

//             break;
//         }

//         if(x==i){
//             printf("%d ",i);
//             count++;
//         }
//     }
//    return 0;

// }

// ----------------------------------------------------------------------------------------------------------------------------------

//  check prime no 

// #include <stdio.h>
// int main()
// {
//     int n, i, count=0, x;
//     printf("enter the terms of prime no: ");
//     scanf("%d", &n);

//     for (i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//             if ((n / i) != i)
//             {
//                 count++;
//             }
//         }
        
//     }
//     if(count==2) {
//             printf("true");}
//         else {

//          printf("false");}
// }

// -------------------------------------------------------------------------------------------------------------

// find factors


// #include <stdio.h>
// int main()
// {
//     int n, i, count=0, x;
//     printf("enter the terms of prime no: ");
//     scanf("%d", &n);

//     for (i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             if ((n / i) == i)
//             {
//                 printf("%d ",n/i);
//             }
//             else printf("%d %d ",i,n/i);
//         }
        
//     }
   
// }

//  it is in unsorted order.

// ........................................................................................

// Program to find the Largest number among n input Numbers

// #include<stdio.h>
// int main()
// {
//     int n,i;
//     float c,big;
//     printf("enter the no of element : ");
//     scanf("%d",&n);

//     printf("enter %d numbers:\n  ", n);
//     printf("element 1: ");
//     scanf("%f",&big);

//     for(i=2;i<=n;i++)
//     {
//         printf("element %d: ",i);
//         scanf("%f",&c);
//         if(big<c)
//            big=c;
//     }
//     printf("/nthe largest of the %d numbers is %f",n,big);
//     return 0;
// }

//........................................................................................................................

// Program to find exponential without using pow() method.

// #include<stdio.h>
// int main()
// {
//     int n,exp,exp1;
//     long long int value = 1; //long long int is of double the size of long int.
//     printf("enter the no and its exponential:");
//     scanf("%d%d",&n,&exp);
//     exp1=exp;

//     for(exp= exp1;exp>0;exp--)
//     {
//         value*=n;
//     }
//     printf("their exponential is: %d",value);
// }

//.........................................................................................................................................

// Program to check if input Number is int or float.

//....................................................................................................................................................

// Program to print the Multiplication Table of any Number.

// #include<stdio.h>
// int main()
// {
//     int n,i,value;
//     printf("enter the no you want to print the table:");
//     scanf("%d",&n);

//     for(i=1;i<=10;i++)
//     {
//         value=n*i;
//         printf("%d*%d=%d\n",n,i,value);
//     }

// }