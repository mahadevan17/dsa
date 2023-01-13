#include <stdio.h>
// insertion functions
void insert(int arr[], int *usize, int data)
{
    arr[*usize] = data;
    (*usize)++;
}
void insertmid(int arr[], int *usize, int index, int data)
{
    for (int i = *usize; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = data;
    (*usize)++;
}

// searching function
void search(int arr[], int *usize, int data)
{
    int i;
    for (i = 0; i < *usize; i++)
    {
        if (arr[i] == data)
        {
            break;
        }
    }
    if (i == *usize)
    {
        printf("element not found \n");
    }
    else
    {
        printf("element found at %d position \n", i);
    }
}

// deletion functions
void deleteindex(int arr[], int *usize, int index)
{
    for (int i = index; i < *usize; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*usize)--;
}
void deletedata(int arr[], int *usize, int data)
{
    int i;
    for (i = 0; i < *usize; i++)
    {
        if (arr[i] == data)
        {
            break;
        }
    }
    if (i == *usize)
    {
        printf("element not found \n");
    }
    else
    {
        for (int j = i; j < *usize; j++)
        {
            arr[j] = arr[j + 1];
        }
        (*usize)--;
    }
}

void disp(int arr[], int *usize)
{
    for (int i = 0; i < *usize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[20];
    int u_size = 0;
    /*
    // insertion
    insert(arr, &u_size, 20);
    insert(arr, &u_size, 40);
    insert(arr, &u_size, 60);
    insertmid(arr, &u_size, 1, 30);
    insertmid(arr, &u_size, 3, 50);
    insertmid(arr, &u_size, 0, 10);
    disp(arr, &u_size);

    // deletion
    deleteindex(arr, &u_size, 2);
    deleteindex(arr, &u_size, 0);
    deletedata(arr, &u_size, 40);
    deletedata(arr, &u_size, 55);
    disp(arr, &u_size);

    // seraching
    search(arr, &u_size, 50);
    search(arr, &u_size, 10);   */
    int a = 1;
    while (a == 1)
    {
        int in,data, index;
        printf("enter your choice\n");
        printf("1)insert at end\n2)insert at index\n3)delete at end\n4)delete at index\n5)search\n");
        scanf("%d", &in);
        switch (in)
        {
            case 1:
                scanf("%d",&data);
                insert(arr, &u_size, data);
                break;
            case 2:
                scanf("%d %d", &index, &data);
                insertmid(arr, &u_size, index, data);
                break;
            case 3:
                scanf("%d", &data);
                deletedata(arr, &u_size, data);
                break;
            case 4:
                scanf("%d", &index);
                deleteindex(arr, &u_size, index);
                break;
            case 5:
                scanf("%d", &data);
                search(arr, &u_size, data);
                break;
            case 6:
                disp(arr, &u_size);
                break;
            case 7:
                a = 0;
                break;
            default:
                printf("please try again\n");
                break;
        }
    }
    return 0;
}