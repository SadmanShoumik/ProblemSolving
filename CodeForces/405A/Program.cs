int n = int.Parse(Console.ReadLine());
string line = Console.ReadLine();
var obj = line.Split(" ");

int[] arr = new int[n];
int[] res = new int[n];
int i, temp;

for(i=0; i<n; i++)
    arr[i] = int.Parse(obj[i]);

for(i=0; i<n-1; i++)
{
    if (arr[i] > arr[i + 1])
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i = -1;
    }
}

for(i=0; i<n; i++)
{
    Console.Write(arr[i]);
    if(i!=n-1)
        Console.Write(" ");
}
