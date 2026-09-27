#include <stdio.h>
#include <string.h>

typedef struct {
    int weight;
    char id[5];
} Package;

int mergeComparisons = 0;
int quickComparisons = 0;

void display(Package a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%s(%d) ", a[i].id, a[i].weight);
    printf("\n");
}

/* ---------------- MERGE SORT ---------------- */

void merge(Package a[], int left, int mid, int right) {
    Package temp[50];
    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right) {
        mergeComparisons++;

        /* <= preserves stability */
        if (a[i].weight <= a[j].weight)
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (i = left; i <= right; i++)
        a[i] = temp[i];

    printf("Merge [%d-%d]: ", left + 1, right + 1);
    display(a + left, right - left + 1);
}

void mergeSort(Package a[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

/* ---------------- QUICK SORT ---------------- */

int partition(Package a[], int low, int high) {
    int pivot = a[high].weight;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        quickComparisons++;

        if (a[j].weight <= pivot) {
            i++;
            Package temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    Package temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    printf("Pivot = %d, Position = %d: ", pivot, i + 2);
    display(a, 8);

    return i + 1;
}

void quickSort(Package a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main(void) {
    Package packages[8] = {
        {20, "P1"},
        {15, "P2"},
        {20, "P3"},
        {10, "P4"},
        {15, "P5"},
        {20, "P6"},
        {25, "P7"},
        {10, "P8"}
    };

    Package mergeArray[8];
    Package quickArray[8];

    memcpy(mergeArray, packages, sizeof(packages));
    memcpy(quickArray, packages, sizeof(packages));

    printf("ORIGINAL DATA\n");
    display(packages, 8);

    printf("\n========== MERGE SORT ==========\n");
    mergeSort(mergeArray, 0, 7);

    printf("\nFinal Merge Sort Result:\n");
    display(mergeArray, 8);
    printf("Number of comparisons = %d\n", mergeComparisons);

    printf("\n========== QUICK SORT ==========\n");
    quickSort(quickArray, 0, 7);

    printf("\nFinal Quick Sort Result:\n");
    display(quickArray, 8);
    printf("Number of comparisons = %d\n", quickComparisons);

    return 0;
}
