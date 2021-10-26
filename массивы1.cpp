#include "TxLib.h"
#include "PrintArray.h"

void FillArray123       (int date[], int size);
void FillArray123321    (int date[], int size);
void FillArray123212321 (int date[], int size);

int main()
    {
    int date[21] = {};

    FillArray123       (date, 21);
    FillArray123321    (date, 18);
    FillArray123212321 (date, 21);

    return 0;
    }

//--------------------------------------------------------------------

void FillArray123 (int date[], int size)
    {
    int k = 1;

    for (int i = 0; i < size; i++)
        {
         date[i] = k;
         k = k + 1;
         if (k > 3) k = 1;
        }

    PrintArray (date, size, "Последовательность 123", 3 );

    //----------------------------------------------------------------

    for (int i = 0; i < size; i++)
        {
         date[i] = i % 3 + 1;
        }

    PrintArray (date, size, "Последовательность 123", 3 );

    }

//--------------------------------------------------------------------

void FillArray123321 (int date[], int size)
    {
    int k = 1;

    for (int i = 0; i < size; i++)
        {
        if (k <= 3) date[i] = k;
            else   date[i] = 7 - k;
        k++;
        if (k > 6) k = 1;
        }

    PrintArray (date, size, "Последовательность 123321", 6 );
    }

//--------------------------------------------------------------------

void FillArray123212321 (int date[], int size)
    {

    for (int i = 0; i < size; i++)

        {
        date[i] = i % 7;
        }

    PrintArray (date, size, "Последовательность 123212321", 7 );

    }


