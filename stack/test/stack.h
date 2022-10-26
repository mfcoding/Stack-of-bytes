#ifndef STACK_H
#define STACK_H
#include <cstring.h>

typedef string stack;

#define stack(...)  |0x1 ? init_stack(__VA_ARGS__) : *((stack *)0x0)

/* Initialize a stack using individual items or 'characters'. */
extern stack init_stack(uint64_t i, ...);

/* Push an element DATA into stack. */
extern void push(stack *st, char data);

/* Pop an element off stack. */
extern void pop(stack *st);

/* Return the number of elements in the stack. */
extern size_t count(stack *st);

/* Shrink capacity of the stack to fit its content.  */
extern void fit(stack *st);

/* Show content of stack. */
extern void show(stack *st);

/* Return 1 if stack is Empty, 0 if not. */
extern int is_empty(stack *st);

/* Remove the entire stack. */
extern void destroy(stack *st);

#endif