
#include <stdio.h>

int main()
{
    char n[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", n);

    for(i = 0; n[i] != '\0'; i++)
    {
        if(n[i] == '0')
            n[i] = '1';
        else if(n[i] == '1')
            n[i] = '0';
        else
        {
            printf("Invalid binary number");
            return 0;
        }
    }

    printf("1's Complement = %s", n);

    return 0;
}
