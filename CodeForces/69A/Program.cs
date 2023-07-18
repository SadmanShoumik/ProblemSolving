int i, x, y, z, n;
string line = "";

n = int.Parse(Console.ReadLine());
x = y = z = 0;

for(i=0; i<n; i++)
{
    line = Console.ReadLine();
    var obj = line.Split(" ");
    x = x + int.Parse(obj[0]);
    y = y + int.Parse(obj[1]);
    z = z + int.Parse(obj[2]);
}

if (x == 0 && y == 0 && z == 0)
    Console.WriteLine("YES");
else
    Console.WriteLine("NO");