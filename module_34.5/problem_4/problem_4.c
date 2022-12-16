#include <stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL)
    {
        fprintf(outputFile, "Not Found\n");
        return 0;
    }

    int count, n, sum = 0;
    fscanf(inputFile, "%d", &count);
    for (int i = 0; i < count; i++)
    {
        fscanf(inputFile, "%d", &n);
        sum += n%10;
    }
    fprintf(outputFile, "Sum = %d", sum);
    
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
