int n = int.Parse(Console.ReadLine());
string s = Console.ReadLine();
var obj = s.Split(" ");
int[] arr = new int[n];

int i, res = 0, mx, mn, temp;

for (i=0; i<n; i++)
{
    arr[i] = int.Parse(obj[i]);
}

mx = arr.Max();
mn = arr.Min();


for(i=0; i<n; i++)
{
    if (arr[i] == mx)
        break;
}
for(; i>0; i--)
{
    temp = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = temp;
    res++;
}


for (i = n-1; i > 0; i--)
{
    if (arr[i] == mn)
        break;
}
for (; i < n-1; i++)
{
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
    res++;
}

Console.WriteLine(res);
/*for (i=0; i<n; i++)
{
    Console.Write(arr[i]+" ");
}*/