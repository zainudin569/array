#include "TxLib.h"
#include "PrintArray.h"
#include "checking the range.h"
#include "Print Sorting Progress.h"
using namespace std; //��� ����� �� �������� swap ????

void FillArrayRandom (int date[], int size);
void FillArrayVibor  (int date[], int size);


int main()
    {
    const int n  =  7;
    int column   =  n;
    //int date [n] = {7,0,10,9,15};
    int date [n] = {};

    FillArrayRandom (date, n);
    PrintArray (date, n, " �� ����������", column );
    FillArrayVibor  (date, n);
    PrintArray (date, n, " ����� ����������", column );
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
    $m; printf ("\n ����������� ����������\n");

    for (int j = 0; j < size; j++)
        {
        int flag = 0;
        for (int i = 0; i < size - (j + 1) ; i++)
            {
            if (date [CHECK(i)] > date [CHECK(i) + 1])
                {
                flag = 1;
                /*int  temp         = date [CHECK(i)];
                date [CHECK(i)]     = date [CHECK(i + 1)];
                date [CHECK(i + 1)] = temp;*/
                swap (date[CHECK(i)], date[CHECK(i + 1)]);

                PrintSorProg (date, size, i, i + 1);
                }
            //printf ("[%d, %d], flag = %d\n", j, i, flag);
            }
        if (!flag) break;
        }
    }


