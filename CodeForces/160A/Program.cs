int n = int.Parse(Console.ReadLine());
string line = Console.ReadLine();
var obj = line.Split(" ");

int i, max = 0, take = 0, cnt = 0;
int[] arr = new int[n];

for(i=0; i<n; i++)
{
    arr[i] = int.Parse(obj[i]);
    max = max + arr[i];
}

Array.Sort(arr);

for(i=n-1; i>=0; i--)
{
    take = take + arr[i];
    max = max - arr[i];
    cnt++;
    if (take > max)
        break;
}
Console.WriteLine(cnt);