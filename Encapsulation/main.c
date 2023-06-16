#include <stdio.h>
#include <stdlib.h>

#include "encaps.h"

int main()
{
    struct public * a = StructCreate(); 

    printf("Public value access %d\n", a->number_public);

    a->number_public = 8;
    
    printf("Public value access %d\n", a->number_public);

    puts("");

    printf("Private value access %d\n", getPrivateNumber(a));

    setPrivateNumber(a, 7);

    printf("Private value access %d\n", getPrivateNumber(a));
    return 0;
}