using System.Runtime.Intrinsics.X86;

var line = Console.ReadLine();
var data = line.Split(' ');

int i, n, k, cnt;

cnt = 0;
n = int.Parse(data[0]);
k = int.Parse(data[1]);

line = Console.ReadLine();
data = line.Split(' ');

for(i=0; i<n; i++)
{
    if (int.Parse(data[i]) == 0)
        break;
    else if (int.Parse(data[i]) >= int.Parse(data[k - 1]))
        cnt++;
    else
        break;
}


Console.WriteLine($"{cnt}");