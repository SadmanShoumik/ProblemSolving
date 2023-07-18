string line = Console.ReadLine();
var obj = line.Split(" ");

int i, n, h, cnt, k;

cnt = 0;
n = int.Parse(obj[0]);
h = int.Parse(obj[1]);

line = Console.ReadLine();
obj = line.Split(" ");
for(i = 0; i < n; i++)
{
    k = int.Parse(obj[i]);
    if (k <= h)
        cnt++;
    else
        cnt += 2;
}

Console.WriteLine(cnt);