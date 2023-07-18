var line = Console.ReadLine();
var data = line.Split(' ');

int m, n, res;

m = int.Parse(data[0]);
n = int.Parse(data[1]);

res = (m * n) / 2;

Console.WriteLine(res);