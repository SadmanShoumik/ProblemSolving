

using System;

class Program
{
    static void Main()
    {
        var line = Console.ReadLine();
        var data = line.Split(' ');

        double i1 = int.Parse(data[0]);
        double i2 = int.Parse(data[1]);
        double i3 = int.Parse(data[2]);

        long res;

        i1 = i1 / i3;
        i1 = Math.Ceiling(i1);
        i2 = i2 / i3;
        i2 = Math.Ceiling(i2);

        res = (long)(i1 * i2);

        Console.WriteLine($"{res}");
    }
}