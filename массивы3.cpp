#include "TxLib.h"
#include "PrintArray.h"
#include "checking the range.h"
#include "Min_num.h"
#include "Print Sorting Progress.h"
using namespace std;

void FillArrayRandom (int date[], int size);
void FillArrayVibor  (int date[], int size);
void PrintArr       (int date[], int size, int pos, int n_min);

int main()
    {
    const int n  =  8;
    int column   =  n;
    int date [n] = {};

    FillArrayRandom (date, n);
    PrintArray (date, n, " До сортировки", column );
    FillArrayVibor  (date, n);
    PrintArray (date, n, " После сортировки", column );

    return 0;
    }

//--------------------------------------------------------------------

void FillArrayRandom (int date[], int size)
    {
    for (int i = 0; i < size; i++)
        date [CHECK(i)] = (rand () %50) * 10 + i;
    }

//--------------------------------------------------------------------

void FillArrayVibor (int date[], int size)
    {
    $m; printf ("\n Сортировка\n");

    for (int i = 0; i < size; i++)
        {
        int n_min = Min_num (date, i, size);

        /*int temp                = date [CHECK(i)];
        date [CHECK(i)]     = date [CHECK(n_min)];
        date [CHECK(n_min)] = temp;*/

        if(i != n_min ) swap (date[CHECK(i)], date[CHECK(n_min)]);

        if(i != n_min ) PrintSorProg (date, size, i, n_min);
        }
    }
