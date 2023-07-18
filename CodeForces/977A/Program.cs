int n, k;
string line = Console.ReadLine(); 
var obj = line.Split(" ");

n = int.Parse(obj[0]);
k = int.Parse(obj[1]);

while(k>0)
{
    k--;
    if (n%10>0)
        n--;
    else
        n/=10;
}

Console.WriteLine(n);