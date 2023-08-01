bool[] prime = new bool[5000001];
void sieve()
{
    prime[0] = true;
    prime[1] = true;

    int i, j;
    for(i=2; i<5000001; i++)
    {
        if (prime[i]==false)
        {
            for(j=i+i; j<5000001; j=j+i)
                prime[j] = true;
        }
    }
}

sieve();

int k = int.Parse(Console.ReadLine());

string s = Console.ReadLine();
var obj = s.Split(" ");

int x;
long n;
int count;
int kekc, kekf;

for(x=0; x<k; x++)
{
    n = long.Parse(obj[x]);

    kekc = (int)Math.Ceiling(Math.Sqrt(n));
    kekf = (int)Math.Floor(Math.Sqrt(n));

    if(kekc!=kekf)
        Console.WriteLine("NO");
    else
    {
        if (prime[kekf]==false)
            Console.WriteLine("YES");
        else
            Console.WriteLine("NO");
    }

}
