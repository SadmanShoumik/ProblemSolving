void rev(int[] arr, int s, int e)
{
    while(s<e)
    {
        //Neat
        (arr[s], arr[e]) = (arr[e], arr[s]);
        s++;
        e--;
    }
}

int[] arr = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9};

int k = int.Parse(Console.ReadLine());
k = k % arr.Length;

rev(arr, arr.Length - k, arr.Length - 1);
rev(arr, 0, arr.Length - k - 1);
rev(arr, 0, arr.Length - 1);

for(int i=0; i<arr.Length; i++)
    Console.Write(arr[i]+" ");