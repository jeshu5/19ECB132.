#include <stdio.h>
int search(int *a, int size, int elem)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (elem == *(a + i))
        {
            return i;
        }
    }
    return -1;
}
void delete (int *a, int size, int elem)
{
    int i, index = search(a, size, elem);
    a += index;
    for (i = index; i < size - 1; i++)
    {
        *a = *(a + 1);
        a++;
    }
    size--;
    a -= size;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(a + i));
    }
}
void insert(int *a, int size, int elem, int pos)
{
    int i = 0;
    a += size;
    for (i = size; i >= pos; i--)
    {
        *a = *(a - 1);
        a--;
    }
    *a = elem;
    a -= pos - 1;
    size++;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(a + i));
    }
}
int main()
{
    int a[100], size, i, elem, pos;
    char ch;
    printf("Enter size of array");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter i to insert/ d to delete");
    scanf(" %c", &ch);
    if (ch == 'i')
    {
        printf("Enter element to insert");
        scanf("%d", &elem);
        printf("Enter positon");
        scanf("%d", &pos);
        insert(a, size, elem, pos);
    }
    else if (ch == 'd')
    {
        printf("Enter element to delete");
        scanf("%d", &elem);
        delete (a, size, elem);
    }
    else
    {
        printf("Wrong choice");
    }
    return 0;
}
/*output
gcc ARRAY.c
Enter 5 elementEnter 6 elementEnter 7 elementEnter 8 elementEnter 9 elementEnter 10 elementEnter 11 elementEnter 12 elementEnter 13 elementEnter 14 elementEnter 15 elementEnter 16 elementEnter 17 elementEnter 18 elementEnter 19 elementEnter 20 elementEnter 21 elementEnter 22 elementEnter 23 elementEnter 24 elementEnter 25 elementEnter 26 elementEnter 27 elementEnter 28 elementEnter 29 elementEnter 30 elementEnter 31 elementEnter 32 elementEnter 33 elementEnter 34 elementEnter 35 elementEnter 36 elementEnter 37 elementEnter 38 elementEnter 39 elementEnter 40 elementEnter 41 elementEnter 42 elementEnter 43 elementEnter 44 elementEnter 45 elementEnter 46 elementEnter 47 elementEnter 48 elementEnter 49 elementEnter 50 elementEnter 51 elementEnter 52 elementEnter 53 elementEnter 54 elementEnter 55 elementEnter i to insert/ d to deleteWrong choice~/19ECB132$ 
  */