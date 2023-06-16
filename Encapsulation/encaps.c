#include "encaps.h"

struct private 
{
    int number_private;
};

int getPrivateNumber(struct public * p)
{
    return p->private_struct->number_private;
}

void setPrivateNumber(struct public *p, int val)
{
    p->private_struct->number_private = val;
}

struct public *StructCreate()
{
    struct public *p = malloc(sizeof *p);
    p->number_public = 0;
    p->private_struct = malloc(sizeof *p->private_struct);
    p->private_struct->number_private = 0;
    return p;
}