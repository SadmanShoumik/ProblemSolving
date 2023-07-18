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

for(x=0; x<k; x++)
{
    n = int.Parse(obj[x]);

    if(n<5000001)
    {
        if (prime[n] == false)
            Console.WriteLine("NO");

    }
}