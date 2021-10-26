#define CHECK(i)  CheckIndex (i, size, __func__)

int CheckIndex (int i, int size, const char func[]);

int CheckIndex (int i, int size, const char func[])
{
 if ((i >= 0) && (i < size)) return i;

 $sm printf ("%s: i = %d вышел за пределы диапазона [%d, %d]\n", func, i, 0, size-1);
 return i;
}
