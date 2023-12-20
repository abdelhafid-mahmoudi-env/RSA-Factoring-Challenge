#include "factor.h"

/**
 * main - Entry point, factorizes numbers from a file.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Exit status.
 */
int main(int argc, char *argv[])
{
    FILE *file;
    long long n, factor1, factor2;

    if (argc != 2)
    {
        printf("Usage: %s <file>\n", argv[0]);
        return (1);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        perror("Error opening file");
        return (1);
    }

    while (fscanf(file, "%lld", &n) != EOF)
    {
        factorize(n, &factor1, &factor2);
        printf("%lld=%lld*%lld\n", n, factor1, factor2);
    }

    fclose(file);
    return (0);
}
