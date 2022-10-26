#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "stack.h"

stack init_stack(uint64_t i, ...)
{    
    stack st = {0,0,NULL};
    if(i == 0)
    {
        return st;
    }
    va_list args;        
    va_start (args, i);           
    for(uint64_t c = 0; c < i; c++)        
    {
        push_back(&st, va_arg (args, int)); 
    }
    va_end (args); 
    shrinkTofit(&st);
    return st;           
}

void push(stack *st, char data)
{
    _push_back__(st, data);
}

void pop(stack *st)
{
    _pop_back__(st);
}

size_t count(stack *st)
{
    return length(st);
}

void fit(stack *st)
{
    shrinkTofit(st);
}

void show(stack *st)
{
    display(st);
}

int is_empty(stack *st)
{
    return empty(st);
}

void destroy(stack *st)
{
    erase(st);
}