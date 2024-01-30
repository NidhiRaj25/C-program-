// #include<stdio.h>
// int main()
//{
//     char c;
//     printf("enter a character : ");
//     scanf("%c", &c);
//     printf("ASCII value of %c = %d", c , c);
    
//     return 0; 
// }
// ............................................................................


// #include<stdio.h>
// int main()
// {
//     char str[20];
//     printf("enter your name :");
//     scanf("%s",str); // or we can use gets(str);to input a complete sentence with spaces unlike scanf().
    
//     printf("welcome to my world %s",str );
//     return 0;
// }

//.....................................................................................

// #include<stdio.h>
// int main()
// {
//    char str[20];
//    scanf("%[^\n]%*c", str);// or we can use %[^\n]s
//    printf("%s", str);
 
//    return 0;
// }

//..............................................................................................

// #include<stdio.h>
// int main(){
//    int num;
//    printf("enter the no: ");
//    scanf("%d",&num);
//    if(num<0)
//       printf("%d is a negative no",num);
//    else if(num==0)
//       printf("zero");
//    else
//    printf("%d is positive no", num);

//    return 0;
// }

// .........................................................................................

// #include<stdio.h>
// int main(){
//    char grade;
//    printf("enter your grade:");
//    scanf("%c", &grade);
//    switch(grade)
//    {
//       case 'A':
//          printf("excellent\n");
//          break;
//       case 'B':
//          printf("keep it up\n");
//          break;
//       case 'C':
//          printf("well done\n");
//          break;
//       case 'D':
//          printf("you passed\n");
//          break;
//       case 'F':
//          printf("Better luck next time\n");
//          break;
//       default:
//          printf("invalid grade\n");
//    }
//    printf("your grade is %c\n",grade);
//    return 0;
// }

//....................................................................................................

// #include<stdio.h>
// int main(){
//    char alpha;
//    printf("enter any alphabet:");
//    scanf("%c",&alpha);
//    switch(alpha)
//    {
//       case 'A':
//       case 'a':
//       case 'E':
//       case 'e':
//       case 'I':
//       case 'i':
//       case 'O':
//       case 'o':
//       case 'U':
//       case 'u':
//          printf("%c is a vowel\n",alpha);
//          break;
//       default:
//          printf("%c is a variable", alpha);
      
//    }
//    return 0;
// }

// .............................................................................................


// #include<stdio.h>
// #include<ctype.h>

// int main(){
//    char alpha;
//    printf("enter an alpha:");
//    putchar('\n');

//    alpha=getchar();  //getchar() is similar to scanf().
//    printf("Reverse case of %c is ",alpha);

//    if(islower(alpha))  //islower() is system defined function under ctype.h header file to check if the character is in lowercase or not.
//       putchar(toupper(alpha));  //toupper() converts the input parameter into equivalent uppercase char.

//    else
//       putchar(tolower(alpha));  //putchar() is similar to printf().

//    return 0;
// }

//..........................................................................................

//Below is a program to swap two numbers using temporary variable.
//using any temporary variable


// #include<stdio.h>
// int main(){

//     int a,b,temp;
//     printf("Enter two number: ");
//     scanf("%d%d",&a,&b);

//     temp=a;
//     a=b;
//     b=temp;

//     printf("a=%d\nb=%d", a,b);
//     return 0;
// }

// without using any temporary variable.

// #include<stdio.h>
// int main()
// {
//     int x , y;
//     printf("Enter two no: ");
//     scanf("%d%d",&x,&y);
//     x=x+y;
//     y=x-y;
//     x=x-y;

//     printf("x=%d\ny=%d",x,y);
//     return 0;
// }

//using Multiplication and Division.

// #include<stdio.h>
// int main()
// {
//     int x , y;
//     printf("Enter two no: ");
//     scanf("%d%d",&x,&y);
//     x=x*y;
//     y=x/y;
//     x=x/y;

//     printf("x=%d\ny=%d",x,y);
//     return 0;
// }

//using bitwise operator

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int x , y;
//     printf("Enter two no: ");
//     scanf("%d%d",&x,&y);
//     x=x^y;
//     y=x^y;
//     x=x^y;

//     printf("x=%d\ny=%d",x,y);
//     getch();
// }

//......................................................................................................

//Program to print the Largest and Smallest using Global Declaration.

// #include<stdio.h>
// int a,b;
// int main()
// {
//     printf("enter two no: ");
//     scanf("%d%d",&a,&b);

//     if(a==b)
//         printf("both are equal");
    
//     else if(a<b){
//         printf("the largest no is %d\n",b);
//         printf("the smallest no is %d\n",a);
//     }
//     else
//     {
//         printf("the largest no is %d\n",a);
//         printf("the smallest no is %d\n",b);
//     }
//     return 0;
// }