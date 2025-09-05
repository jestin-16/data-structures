#include <stdio.h>
#include <stdlib.h>  // for exit()

#define MAX 5

struct Stack {
    int stack[MAX];
    int top;
};

// Function to initialize stack
void init(struct Stack *s) {
    s->top = -1;
}

// Push function
void push(struct Stack *s) {
    if (s->top == MAX - 1) {
        printf("\nStack Overflow");
    } else {
        int el;
        printf("\nEnter the element: ");
        scanf("%d", &el);
        s->stack[++(s->top)] = el;
    }
}

// Pop function
void pop(struct Stack *s) {
    if (s->top == -1) {
        printf("\nStack Underflow");
    } else {
        printf("\nDeleted element: %d", s->stack[s->top--]);
    }
}

// Display function
void display(struct Stack *s) {
    if (s->top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nStack elements: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->stack[i]);
        }
    }
}

int main() {
    struct Stack obj;
    init(&obj);

    int res;
    do {
        printf("\n\nEnter your choice:\n1. Push\n2. Pop\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &res);

        switch (res) {
            case 1: push(&obj); break;
            case 2: pop(&obj); break;
            case 3: display(&obj); break;
            case 4: exit(0);
            default: printf("\nInvalid choice");
        }
    } while (1);

    return 0;
}
