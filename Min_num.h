int Min_num (const int date[], int start, int size);

int Min_num (const int date[], int start, int size)
    {
    int n_min = start;
    for (int i = start; i < size; i++)
        {
        if (date [i] < date [n_min])
        n_min = i;
        }
    //printf ("Минимальное значение в ячейке [%d] равная %d\n\n", n_min, date [n_min]);
    return n_min;
    }
