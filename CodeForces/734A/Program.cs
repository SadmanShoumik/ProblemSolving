int n = int.Parse(Console.ReadLine());
string line = Console.ReadLine();

int a, d;
a = d = 0;

for(int i = 0; i < n; i++)
{
    if (line[i] == 'A')
        a++;
    else
        d++;
}

if (a > d)
    Console.WriteLine("Anton");
else if (d > a)
    Console.WriteLine("Danik");
else
    Console.WriteLine("Friendship");
