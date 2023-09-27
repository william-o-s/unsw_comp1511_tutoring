// William Setiawan (z5388080)
// on 13/6/2023

#include <stdio.h>

void a(void);
void b(void);
void c(void);
void d(void);
void e(void);
void f(void);
void g(void);
void h(void);

int main(void) {
    printf("Printing a()\n");
    a();
    printf("Printing b()\n");
    b();
    printf("Printing c()\n");
    c();
    printf("Printing d()\n");
    d();
    printf("Printing e()\n");
    e();
    printf("Printing f()\n");
    // f();
    printf("Printing g()\n");
    // g();
    printf("Printing h()\n");
    h();
}

void a(void) {
    int i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
}

void b(void) {
    int i = 1;
    while (i < 32) {
        printf("%d\n", i);
        i = i + i;
    }
}

void c(void) {
    int i = 0;
    while (i < 32) {
        printf("%d\n", i);
        i = i + 2;
    }
}

void d(void) {
    int i = 5;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
}

void e(void) {
    int i = 0;
    int keep_going = 1;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}

void f(void) {
    int i;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
}

void g(void) {
    int i = 0;
    int max = 32;
    while (i < max) {
        printf("%d\n", i);
        max = max + 2;
    }
}

void h(void) {
    int i = 0;
    int keep_going = 0;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}
