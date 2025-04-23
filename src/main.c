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

#ifdef __AVR_ATmega328P__
void setup() {
  Serial.begin(115200); 
}

void loop() {
  Serial.println(stack_is_up_or_down(NULL) ? "UP" : "DOWN"); //Down
  delay(1000); 
}
#else

int main() {
    printf("%s\n", stack_is_up_or_down(NULL) ? "UP" : "DOWN");
    return 0;
}

#endif


