#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("%-20s: %d bits [%d; %d]\n", "int", sizeof(int)*8, INT_MIN, INT_MAX);

    printf("%-20s: %d bits [%ld; %ld]\n", "long int", sizeof(long int)*8, LONG_MIN, LONG_MAX);

    printf("%-20s: %d bits [%lld; %lld]\n", "long long int", sizeof(long long int)*8, LLONG_MIN, LLONG_MAX);

    printf("%-20s: %d bits [%d; %u]\n", "unsigned", sizeof(unsigned)*8, 0,UINT_MAX);

    printf("%-20s: %d bits [%d; %lu]\n", "unsigned long", sizeof(unsigned long)*8, 0,ULONG_MAX);

    printf("%-20s: %d bits [%d; %llu]\n", "unsigned long long ", sizeof(unsigned long long )*8, 0,ULLONG_MAX);

    return 0;

}
