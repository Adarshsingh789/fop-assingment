#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str2[100], rev[100];
    int choice, i, len;

    printf("Enter string: ");
    scanf(" %[^
]", str);

    while(1)
    {
        printf("\n1. Length\n2. Reverse\n3. Compare\n4. Exit\n");
        printf("Enter choice: ");

        if(scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            break;
        }

        switch(choice)
        {
            case 1:
                len = strlen(str);
                printf("Length = %d\n", len);
                break;

            case 2:
                len = strlen(str);
                for(i = 0; i < len; i++)
                {
                    rev[i] = str[len - i - 1];
                }
                rev[len] = '\0';
                printf("Reverse = %s\n", rev);
                break;

            case 3:
                printf("Enter second string: ");
                scanf(" %[^
]", str2);
                if(strcmp(str, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 4:
                printf("Exiting program\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
