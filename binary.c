#include <stdio.h>

void main() {
    int a[10];
    int low, mid, high, i, n, el, found = 0;  // initialize found = 0

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements in ascending order: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the element to search: ");
    scanf("%d", &el);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == el) {
            printf("\nElement found at position %d\n", mid + 1); // +1 for human-friendly index
            found = 1;
            break;
        }
        else if(el > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found)
        printf("\nElement not found\n");
}
