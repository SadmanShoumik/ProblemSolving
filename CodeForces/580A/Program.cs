int n = int.Parse(Console.ReadLine());

string s  = Console.ReadLine();
var obj = s.Split(" ");

int i, res = 0, max = 0;
int[] arr = new int[n];
arr[0] = int.Parse(obj[0]);

for(i=1; i<n; i++)
{
    arr[i] = int.Parse(obj[i]);
    if (arr[i] >= arr[i - 1])
    {
        res++;
        if (res > max)
            max = res;
    }
    else
    {
        if (res > max)
            max = res;
        res = 0;
    }
}

max++;

Console.WriteLine(max);
