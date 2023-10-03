int[] arr = new int[] {1, 2, 3, 4, 5, 10, 23, 2, 53, 100, 34, 36, 98, 96, 23, 56, 84, 53, 34};

int i, max=0, max2=0, min=1000, min2=1000;

for(i=0; i<arr.Length; i++)
{
    if (arr[i]>max)
    {
        max2 = max;
        max = arr[i];
    }
    else if (arr[i]>max2)
    {
        max2 = arr[i];
    }

    if (arr[i] < min)
    {
        min2 = min;
        min = arr[i];
    }
    else if (arr[i] < min2)
    {
        min2 = arr[i];
    }
}

Console.WriteLine(max2);
Console.WriteLine(min2);