#include <stdbool.h>
// stack.h

// The stack ADT, implemented with array.
struct stack;




// stack *stack_init() returns a newly created stack with nothing in it.
// requires: enough memory
//           user need to release the memory through stack_destory
// effects: allocates memory
// time: O(1)
struct stack *stack_init(void);




// is_stack_empty(*s) returns true if the stack is empty, false otherwise.
// requires: s is valid pointer to a stack
// time: O(1)
bool is_stack_empty(const struct stack *s);




// stack_push(item, *s) pushes item to the stack s
// requires: enouth memory
//           user need to release the memory through stack_destory
// effects: mutates value in stack
//          allocates memory
// time: O(1) average
void stack_push(int item, struct stack *s);




// stack_top(*s) returns the last element pushed to the stack s
// requires: s is valid pointer to a stack
// time: O(1)
int stack_top(const struct stack *s);




// stack_pop(*s) takes the last element pushed to the stack and delete it
// requires: s is valid pointer to a stack
// effects: mutates value in stack
// time: O(1)
int stack_pop(struct stack *s);



// stack_destory(*s) destory the stack completely
// requires: s is valid pointer to a stack
// effects: frees memory from heap
// time: O(1)
void stack_destory(struct stack *s);


