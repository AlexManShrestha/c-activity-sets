#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char str1[100], str2[100];
    input_two_strings(str1, str2);
    int result = stringcompare(str1, str2);
    output(str1, str2, result);
    return 0;
}

void input_two_strings(char *str1, char *str2)
{
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
}

int stringcompare(char *str1, char *str2)
{
    int result;
    if(*str1>*str2)
    {
        result = 1;
    }
    else if(*str1==*str2)
    {
        result = 0;
    }
    else{
        result = 2;
    }
    return result;
}

void output(char *str1, char *str2, int result)
{
    if (result == 2) {
        printf("%s is less than %s\n", str1, str2);
    } else if (result == 1) {
        printf("%s is greater than %s\n", str1, str2);
    } else if (result == 0){
        printf("%s is equal to %s\n", str1, str2);
    }
}
