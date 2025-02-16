// C Program For Boolean to String Conversion
#include <stdio.h>
#include <stdbool.h>

const char* boolToString(bool value) {
    return value ? "true" : "false";
}

int main() {
    bool val1 = 1;
    bool val2 = 0;

    printf("Boolean value %d as string: %s\n", val1, boolToString(val1));
    printf("Boolean value %d as string: %s\n", val2, boolToString(val2));

    return 0;
}
