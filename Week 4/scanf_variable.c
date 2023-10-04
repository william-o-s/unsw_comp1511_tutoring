// William Setiawan (z5388080)

#include <stdio.h>

void code_smell(void);
void loop_scan_1(void);
void loop_scan_2(void);

int main(void) {
    code_smell();
    loop_scan_1();
    loop_scan_2();

    return 0;
}

void code_smell(void) {
    // NOTE: Try entering something other than an integer
    int num;
    int result = scanf("%d", &num);
    printf("Expected 1 result, got %d result\n", result);
    printf("%d\n", num);

    // NOTE: Try scanning multiple inputs
    int num1;
    int num2;
    int result1 = scanf("%d %d", &num1, &num2);
    printf("Expected 2 results, got %d results\n", result1);
}

void loop_scan_1(void) {
    int input_var;

    int result = scanf("%d", &input_var);
    while (result == 1) {
        // successfully read an integer into input_var
        printf("Read %d\n", input_var);

        result = scanf("%d", &input_var);
    }
}

void loop_scan_2(void) {
    int input_var;
    while (scanf("%d", &input_var) == 1) {
        // successfully read an integer into input_var
        printf("Read %d\n", input_var);
    }
}
