#include <stdio.h>

int main()
{
    FILE *f = fopen("test.txt","w");
    if (f == NULL)
    {
        printf("Error: file not open\n");
        return -1;
    }
    fprintf(f, "%s\n", "test\nTest");
    fclose(f);
    return 0;
}
