//implementation of various operations on array
// insert, del, reverse, display, search.

#include<stdio.h>
#include<stdint.h>
#define MAX 5

void insert(int *arr, int pos, int num);
void display(int *arr);
void del(int *arr, int pos);
void reverse(int *arr);
void search(int *arr, int num);

int main(void){
    int arr[5];
    insert(arr, 1, 11);
    insert(arr, 2, 22);
    insert(arr, 3, 33);
    insert(arr, 4, 44);
    insert(arr, 5, 55);
    display(arr);
    del(arr, 1);
    display(arr);
    insert(arr, 1, 22);
    display(arr);
    reverse(arr);
    display(arr);
    search(arr, 22);
    search(arr, 44);
    return 0;
}

void insert(int *arr, int pos, int num){
    int i;
    for(i = MAX-1; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[i] = num;
}
void display(int *arr){
    int i;
    for(i = 0; i < MAX; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
void del(int *arr, int pos){
    int i;
    for(i = pos; i < MAX-1; i++){
        arr[i] = arr[i + 1];

    }
    arr[i] = 0;
}
void reverse(int *arr){
    int i;
    for(i = MAX-1; i>= MAX / 2; i--){
        int temp = arr[i];
        arr[i] = arr[MAX - 1 - i];
        arr[MAX - 1 - i] = temp;
    }

}
void search(int *arr, int num){
    int i;
    for(i = 0; i < MAX; i++){
        if(arr[i] == num){
            printf("Element %d is at %dth position.\n", num, i + 1);
            return;

        }
    }
    printf("Element %d is absent\n", num);
}