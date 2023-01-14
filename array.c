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
void linearsearch(int arr[], int *usize, int data)
{
    int i, j = 0;
    for (i = 0; i < *usize; i++)
    {
        j++;
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
    printf("the no of comparisions were %d\n", j);
}
void binarysearch(int arr[], int *usize, int sData)
{
    int beg = 0, i = 0;
    int end = (*usize) - 1;
    int mid = (beg + end) / 2;
    while (beg != end)
    {
        mid = (beg + end) / 2;   
        if (arr[mid] == sData)
        {
            printf("element is found at %d position\n", mid);
            break;
        }
        else if (arr[mid] > sData)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        i++;
    }
    printf("the no of comparisions were %d\n", i);
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
//traversal
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
    int a = 1;
    while (a == 1)
    {
        int in, data, index;
        printf("enter your choice\n");
        printf("1)insert at end\n2)insert at index\n3)delete data\n4)delete at index\n5)linear serach\n6)binarysearch\n7)display\n8)exit\n");
        scanf("%d", &in);
        switch (in)
        {
        case 1:
            printf("enter the data: ");
            scanf("%d", &data);
            insert(arr, &u_size, data);
            break;
        case 2:
            printf("enter the index and data: ");
            scanf("%d %d", &index, &data);
            insertmid(arr, &u_size, index, data);
            break;
        case 3:
            printf("enter the data: ");
            scanf("%d", &data);
            deletedata(arr, &u_size, data);
            break;
        case 4:
            printf("enter the index: ");
            scanf("%d", &index);
            deleteindex(arr, &u_size, index);
            break;
        case 5:
            printf("enter the data: ");
            scanf("%d", &data);
            linearsearch(arr, &u_size, data);
            break;
        case 6:
            printf("enter the data: ");
            scanf("%d", &data);
            binarysearch(arr, &u_size, data);
            break;
        case 7:
            disp(arr, &u_size);
            break;
        case 8:
            a = 0;
            break;
        default:
            printf("please try again\n");
            break;
        }
    }

    return 0;
}
