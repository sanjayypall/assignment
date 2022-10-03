// #include<stdio.h>
// int main()
// {
//     int str[10] = {'s','a','n','j','a','y'};
//    int count = 0,i;
//     for ( i = 0; str[i]; i++)
//     {
//         count++;
//     }
//     printf("The length of the string is %d",i);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//    char str[20],count=0,temp = 0;
//     printf("Enter your name\n");
//     gets(str);
//     printf("Your name is %s\n",str);
//     char c;

//     for (int i = 0; str[i]; i++)
//     {
//         if (str[i]=='c')
//         {
//             count++;
//             temp = 1;
//         }

//     }
//     if (temp == 1)
//     {
//         printf(" occurs in %d times",count);
//     }
//     else
//     printf("NO Occurance\n");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int count=0,temp=0;
//     char str[100];
//     printf("Enter any sentence\n");
//     // gets(str);
//     fgets(str,100,stdin);
//     for (int i = 0; str[i]; i++)
//     {
//         if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
//         {
//             count++;
//             temp = 1;
//         }

//     }
// if (temp==1)
// {
//     printf("There are %d vowels in this given sentence\n",count);
// }
// else
// printf("No vowels are there in the sentence\n");
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char str[100];
//    printf("Enter any string here\n");
//    gets(str);
//    printf("The input string is %s\n",str);
//    strupr(str);
//    printf("The upper case of the string is %s",str);
//    return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char str[100];
//    printf("Enter any string here\n");
//    gets(str);
//    printf("The input string is %s\n",str);
//    strlwr(str);
//    printf("The lower case of the string is %s",str);
//    return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char str[100];
//    printf("Enter any string here\n");
//    gets(str);
//    printf("The input string is %s\n",str);
//    strrev(str);
//    printf("The reverse of the string is %s",str);
//    return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char str[100];
//    int len;
//    printf("Enter any string here\n");
//    gets(str);
//    printf("The input string is %s\n",str);
//    len = strlen(str);
//    printf("The length of the string is %d",len);
//    return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char str[100];
//    printf("Enter any string here\n");
//    gets(str);
//    printf("The input string is %s\n",str);
//    strcpy(str,"kalicharan");
//    printf("The copied string is %s",str);
//    return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[100];
//     char l;
//     printf("Enter any string  here\n");
//     gets(str);
    
//     for (int i = 0; str[i]; i++)
//     {
//         for (int j = i + 1; str[j]; j++)
//         {
//             if (str[i] > str[j])
//             {
//                 l = str[i];
//                 str[i] = str[j];
//                 str[j] = l;
//             }
//         }
//     }
//     for (int i = 0; str[i]; i++)
//     {
//         printf("%c", str[i]);
//     }

//     return 0;
// }


#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter any string here\n");
    gets(str);
    int b[20];
    int c=0;
    for (int i = 0; str[i]; i++)
    {
        c=1;
        if(str[i]!=-1)
        {
            for (int j = i+1; str[j] ; j++)
            {
                if(str[i]==str[j])
                {
                c++;
                str[j]=-1;
                }
            }
            
        }
        b[i]=c;
    }
    
    for (int i = 0; str[i] ; i++)
    {
        if (str[i]!=-1)
        {
            printf("The frequency of %c is %d\n",str[i],b[i]);
        }
        
    }
    return 0;

}
