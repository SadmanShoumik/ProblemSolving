string s = Console.ReadLine();
var obj = s.Split(" ");

double n = double.Parse(obj[0]);
double k = double.Parse(obj[1]);

if(k*2<=n+1)
{
    Console.WriteLine((k * 2) - 1);
}
else
{
    if (n % 2 == 0)
    {
        k = k - n / 2;
        Console.WriteLine(k * 2);
    }
    else
    {
        k = k - Math.Floor(n / 2);
        Console.WriteLine((k * 2) - 2);
    }
}