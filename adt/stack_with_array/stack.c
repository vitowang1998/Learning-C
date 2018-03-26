#include "stack.h"
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>


// For DOCUMENTATION, see stack.h

struct stack {
    int len;
    int maxlen;
    int *data;
};

struct stack *stack_init(void) {
    struct stack *s = malloc(sizeof(struct stack));
    s->len = 0;
    s->maxlen = 1;
    s->data = malloc(s->maxlen * sizeof(int));
    return s;
}

bool is_stack_empty(const struct stack *s) {
    assert(s);
    return (s->len == 0);
}

void stack_push(int item, struct stack *s) {
    assert(s);
    if (s->len == s->maxlen) {
        s->maxlen *= 2;
        s->data = realloc(s->data, s->maxlen * sizeof(int));
    }
    s->data[s->len] = item;
    s->len += 1;
}

int stack_top(const struct stack *s) {
    assert(s);
    assert(s->len > 0);
    return s->data[s->len - 1];
}

int stack_pop(struct stack *s) {
    assert(s);
    assert(s->len > 0);
    s->len -= 1;
    return s->data[s->len - 1];
}


void stack_destory(struct stack *s) {
    free(s->data);
    free(s);
}



