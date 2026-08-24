#include <stdio.h>

int main()
{
    char input[100];

    while(1)
    {
        printf("Enter a command: ");
        scanf("%s", input);

        if(input[0] == 'e' && input[1] == 'x' &&
           input[2] == 'i' && input[3] == 't')
        {
            break;
        }

        printf("You entered: %s\n", input);
    }

    printf("Program ended.\n");

    return 0;
}