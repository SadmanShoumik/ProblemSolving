double n = Convert.ToDouble(Console.ReadLine());

double res = n / 2;

if (n % 2 == 0)
    Console.WriteLine(res);
else
    Console.WriteLine( Math.Ceiling(res) * (-1) );