#include <stdio.h>

int sumnum(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int num[100];
    int n;
    printf("Enter no. of elements want to add: ");
    scanf("%d",&n);
    printf("Start to enter the values\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    int sum = sumnum(num,n);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
