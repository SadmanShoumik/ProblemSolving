string line = Console.ReadLine();
var obj = line.Split(" ");

int i, j, n, k;
n = int.Parse(obj[0]);
k = int.Parse(obj[1]);

string q = Console.ReadLine();
char[] arr = q.ToCharArray();

for(i = 0; i < k; i++)
{
    for(j = 0; j < n-1; j++)
    {
        if (arr[j]=='B' && arr[j+1]=='G')
        {
            arr[j] = 'G';
            arr[j + 1] = 'B';
            j++;
        }
    }
}

q = new string(arr);
Console.WriteLine(q);
