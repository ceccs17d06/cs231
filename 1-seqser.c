        //ANAKHA BM
        //ROLL_NO:6



#include <stdio.h>

int main()

{

    int array[10];

    int i, num, keynum, found = 0;

    printf("Enter the value of num \n");

    scanf("%d", &num);

    printf("Enter the elements one by one \n");

    for (i = 0; i < num; i++)

    {

        scanf("%d", &array[i]);

    }

    printf("Input array is \n");

    for (i = 0; i < num; i++)

    {

        printf("%dn", array[i]);

    }

    printf("Enter the element to be searched \n");

    scanf("%d", &keynum);

    for (i = 0; i < num ; i++)

    {

        if (keynum == array[i] )

        {

            found = 1;

            break;

        }

    }

    if (found == 1)

        printf("Element is present in the array\n");

    else

        printf("Element is not present in the array\n");

    return 0;

}


OUTPUT:
Enter size of array:2
Enter the elements of the array: 2
3
Enter the element to search for:3
Element found at the position: 2
