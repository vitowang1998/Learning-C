#include <stdio.h>
#include <stdlib.h>

struct my_struct {
    int val;
    void (*set_val) (int val, struct my_struct *s);
};

void set_val(int val, struct my_struct *s) {
    s->val = val;
}

struct my_struct *create_struct(int val) {
    struct my_struct *s = malloc(sizeof(struct my_struct));
    s->val = val;
    s->set_val = set_val;
    return s;
}

void destory_struct(struct my_struct *s) {
    free(s);
}

void print_val(struct my_struct *s) {
    printf("The value of s is %d.\n", s->val);
}

int main(int argc, const char * argv[]) {
    struct my_struct *s = create_struct(3);
    print_val(s);
    printf("The value of s is %p\n", s);
    // change in common way
    set_val(5, s);
    print_val(s);
    printf("The value of s is %p\n", s);
    // change with function pointer inside structure
    s->set_val(7, s);
    print_val(s);
    printf("The value of s is %p\n", s);
    destory_struct(s);
    s = NULL;
    printf("The value of s is %p\n", s);
    
    return 0;
}
