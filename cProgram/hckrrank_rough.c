// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {

// char ch;
//     char s[20], sen[100];
//     printf("Enter the character ");
//     scanf("%c", &ch);
//     printf("Enter the sentence");
//     scanf("%[^\n]%*c", sen);
//     printf("Enter the string ");
//     scanf("%s", s);
//     printf("%c\n", ch);
//     printf("%s\n", s);
//     printf("%s\n", sen);
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }

//..................................................................................................
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// 	int a,b;
//     float m,n;
//     scanf("%d %d",&a ,&b);
//     scanf("%f %f",&m , &n);
//     int intSum = a + b;
//     float floatSum = m + n;
//     int intDiff = a - b;
//     float floatDiff = m - n;
    
    
//     printf("%d %d\n",intSum,intDiff );
//     printf("%.1f %.1f",floatSum, floatDiff );
    
    
    
//     return 0;
// }
// ...............................................................................................................................................................................................

#include<stdio.h>
void main() 
{
    int n;
    printf("enter the no:");
    scanf("%d", &n);
    int i, j,k;
    for(i=n; i>0; i--)
    {
        for(j=n; j>0; j--)
        {
             for(k=i; k>0; k--) {
                printf("%d",j);
             }
        }
        printf("\n");
    }
}