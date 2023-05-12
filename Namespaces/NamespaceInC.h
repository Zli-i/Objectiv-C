#pragma once

#include <stdio.h>
#include <stdlib.h>

void some_very_long_function_name_for_my_printf()
{
	printf("namespace example\n");
}

#define my_printf() some_very_long_function_name_for_my_printf() 