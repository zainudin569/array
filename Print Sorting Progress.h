void PrintSorProg (int date[], int size, int pos, int n_min);

void PrintSorProg (int date[], int size, int pos, int n_min)
    {
       for (int i = 0; i < size; i++)
            {
            if ((i == pos) || (i == n_min))
                {
                $d; printf ("[%2d] = ", i);
                $g; printf ("%3d", date [CHECK(i)]);
                if (i < size - 1) $d; printf (", ");
                }
            else
                {
                $d; printf ("[%2d] = ", i);
                $d; printf ("%3d", date [CHECK(i)]);
                if (i < size - 1) $d; printf (", ");
                }
            }

    printf ("\n\n");
    }
