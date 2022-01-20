#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    char op = 'A', i = 'y';
    int n1 = 0, n2 = 0, result = 0, modulo = 0;
    do
    {
        printf("Choose A = Addition\t S= Substration\t D = Division \t M= Multiplication!\n");
        printf("********************************************************************************\n");
        printf("Which operation Do you want to perform\n");
        scanf(" %c", &op);
        printf("Enter two number one after another, then click ↩️\n");
        scanf("%d%d", &n1, &n2);
        switch (op)
        {
            case 'A':
                result = n1 + n2;
                break;
            case 'S':
                result = n1 - n2;
                break;
            case 'D':
                result;
                result = n1 / n2;
                modulo = n1%n2;
                break;
            case 'M':
                result = n1 * n2;
                break;
            default:
            {
                printf("Bad Operation!!!🚫\n\n");
            }
        }
        printf("Result is %d and the remainder is %d\n", result, modulo);
        printf("Do you want to redo the calculation? y for Yes or n for No\n");
        scanf(" %c", &i);
    } while (i == 'y');
    printf("👋\n");
    return 0;
}