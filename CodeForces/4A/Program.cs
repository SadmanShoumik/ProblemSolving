int w;

w = Convert.ToInt32(Console.ReadLine());

if (w == 2 || w == 0)
    Console.WriteLine("NO");
else if (w % 2 == 0)
    Console.WriteLine("YES");
else
    Console.WriteLine("NO");
