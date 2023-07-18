int t = int.Parse(Console.ReadLine());
int i, a, b, res;
string s = "";
for (i = 0; i < t; i++)
{
    s = Console.ReadLine();
    var obj = s.Split(" ");
    a = int.Parse(obj[0]);
    b = int.Parse(obj[1]);

    res = a % b;
    if (res == 0)
        Console.WriteLine(res);
    else
    {
        res = b - res;
        Console.WriteLine(res);
    }
}
