using System;

int n = int.Parse(Console.ReadLine());
string s = Console.ReadLine();
var obj = s.Split(" ");

int i, tp, sum;

tp = n * 100;
sum = 0;

for (i=0; i<n; i++)
{
    sum = sum + int.Parse(obj[i]);
}

double res;

res = (double)sum;
res = res / tp * 100;
string r = res.ToString("0.000000000000");
Console.WriteLine(r);