#include <stdlib.h>

struct private;

struct public 
{
    int number_public;

    //DO NOT ACCESS!
    struct private *private_struct;
};

int getPrivateNumber(struct public * p);

void setPrivateNumber(struct public *p, int val);

struct public *StructCreate();




