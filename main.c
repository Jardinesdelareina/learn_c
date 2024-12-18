#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l_idx, int m_idx, int r_idx) {
    int i, j, k;
    int size_left = m_idx - l_idx + 1; // Размер левой половины массива
    int size_right = r_idx - m_idx;    // Размер правой половины массива

    // Временные массивы
    //int left_array[size_left], right_array[size_right];
    int *left_array = (int *)malloc(size_left * sizeof(int));
    int *right_array = (int *)malloc(size_right * sizeof(int));

    // Копируем данные во временные массивы left_array[] и right_array[]
    for (i = 0; i < size_left; i++)
        left_array[i] = arr[l_idx + i];
    for (j = 0; j < size_right; j++)
        right_array[j] = arr[m_idx + 1 + j];

    // Сливаем временные массивы обратно в arr[left..right]
    i = 0; // Индекс первого подмассива
    j = 0; // Индекс второго подмассива
    k = l_idx; // Индекс слияния

    while (i < size_left && j < size_right) {
        if (left_array[i] <= right_array[j]) {
            arr[k] = left_array[i];
            i++;
        } else {
            arr[k] = right_array[j];
            j++;
        }
        k++;
    }

    // Копируем оставшиеся элементы left_array[], если есть
    while (i < size_left) {
        arr[k] = left_array[i];
        i++;
        k++;
    }

    // Копируем оставшиеся элементы right_array[], если есть
    while (j < size_right) {
        arr[k] = right_array[j];
        j++;
        k++;
    }

    free(left_array);
    free(right_array);
}

void merge_sort(int arr[], int left_part, int right_part) {
    if (left_part < right_part) {
        // Находим середину
        int mid_point = left_part + (right_part - left_part) / 2;

        // Рекурсивно сортируем первую и вторую половины
        merge_sort(arr, left_part, mid_point);
        merge_sort(arr, mid_point + 1, right_part);

        // Сливаем отсортированные половины
        merge(arr, left_part, mid_point, right_part);
    }
}

// Функция для печати массива
void print_array(int arr[], int size_array) {
    for (int i = 0; i < size_array; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Основная функция
int main() {
    int arr_size;

    printf("Size elements: ");
    scanf("%d", &arr_size);

    // Динамическое выделение памяти для массива
    int *arr = (int *)malloc(arr_size * sizeof(int));

    printf("Input elements:\n");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("In array: \n");
    print_array(arr, arr_size);

    merge_sort(arr, 0, arr_size - 1);

    printf("\nOut array: \n");
    print_array(arr, arr_size);
    return 0;
}


// gcc main.c -o main -Wall -Wextra -std=c99 -pedantic