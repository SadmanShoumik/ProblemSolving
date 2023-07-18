using System.Collections.Generic;

int k, l, m, n, d;

k = int.Parse(Console.ReadLine());
l = int.Parse(Console.ReadLine());
m = int.Parse(Console.ReadLine());
n = int.Parse(Console.ReadLine());
d = int.Parse(Console.ReadLine());

int i;

HashSet<int> set = new HashSet<int>();
for (i = 1; i <= d; i++)
{
    if( i % k==0 || i % l == 0 || i % m == 0 || i % n == 0)
        set.Add(i);
}

/*foreach(var val in set)
    Console.WriteLine("--"+val);*/

int res = set.Count();
Console.WriteLine(res);


