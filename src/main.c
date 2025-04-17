#include <stdio.h>
#include <stdbool.h>

bool stack_is_up_or_down(int *other) {
    int x;

    if (!other) {
        return stack_is_up_or_down(&x);
    } else {
        return &x > other;
    }
}

int main() {
    printf("%s\n", stack_is_up_or_down(NULL) ? "UP" : "DOWN");
    return 0;
}
