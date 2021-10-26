void PrintArray (const int date[], int size, const char title[], int column);

void PrintArray (const int date[], int size, const char title[], int column)
    {
    $sg printf ("\n%s", title);

    for (int i = 0; i < size; i++)
        {
        if (i % column == 0) printf ("\n");

        $sr; printf ("[%2d] = ", i);
        $sy; printf ( "%3d", date [i]);
        if (i < size - 1) printf (", ");
        }
    printf ("\n");
    }
