int i, m, n;

string s = Console.ReadLine();
var obj = s.Split(" ");

m = int.Parse(obj[0]);
n = int.Parse(obj[1]);

for(i = 0; ; i++)
{
    if( m * Math.Pow(3,i) > n * Math.Pow(2, i) )
        break;
}

Console.WriteLine(i);

