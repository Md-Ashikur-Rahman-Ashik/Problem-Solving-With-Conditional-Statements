// #include <stdio.h>

// int main()
// {
//     int num1, num2;

//     scanf("%d %d", &num1, &num2);

//     if (num1 >= num2)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num1, num2;

//     scanf("%d %d", &num1, &num2);

//     if (num1 % num2 == 0 || num2 % num1 == 0)
//     {
//         printf("Multiples");
//     }
//     else
//     {
//         printf("No Multiples");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num, result = 0, i;

//     scanf("%d", &num);

//     for (i = 0; result < 2; i++)
//     {
//         /* code */
//         if (num / 10 != 0)
//         {
//             num = num / 10;
//         }
//         else
//         {
//             if (num % 2 == 0)
//             {
//                 /* code */
//                 printf("EVEN");
//                 result = 2;
//             }
//             else
//             {
//                 printf("ODD");
//                 result = 2;
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char character;
//     int result;

//     scanf("%c", &character);

//     int low = islower(character);
//     // printf("%d", low);

//     if (low == 2)
//     {
//         /* code */
//         result = toupper(character);
//     }
//     else
//     {
//         result = tolower(character);
//     }

//     printf("%c", result);

//     return 0;
// }