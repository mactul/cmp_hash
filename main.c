#include "cmp_hash.h"
#include <stdio.h>

int main()
{
    Cmp_hash hash1;
    Cmp_hash hash2;
    
    if(cmp_create_hash(&hash1, "test1.bin") != OK)
    {
        printf("Error File Not Found\n");
        return 1;
    }
    if(cmp_create_hash(&hash2, "test2.bin") != OK)
    {
        printf("Error File Not Found\n");
        return 1;
    }

    if(check_hash_integrity(&hash1))
    {
        printf("hash1 has intergrity\n");
    }
    
    printf("These 2 files are variants with a certainty of %f %%\n", 100*certainty(cmp_two_hashes(&hash1,&hash2)));

    return 0;
}