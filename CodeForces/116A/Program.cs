int n = int.Parse(Console.ReadLine());

int res, a, b, max;
res = 0;
max = 0;

for(int i = 0; i < n; i++)
{
    string line = Console.ReadLine();
    var obj = line.Split(" ");
    a = int.Parse(obj[0]);
    b = int.Parse(obj[1]);
    res = res - a + b;
    if (res > max)
        max = res;
}

Console.WriteLine(max);