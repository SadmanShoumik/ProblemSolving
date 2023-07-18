string line = Console.ReadLine();
var obj = line.Split(" ");

int k, n, w;
k = int.Parse(obj[0]);
n = int.Parse(obj[1]);
w = int.Parse(obj[2]);

double res;

res = (k * w * (w + 1)) / 2;
res = res - n;
if (res < 0)
    Console.WriteLine("0");
else
    Console.WriteLine(res);