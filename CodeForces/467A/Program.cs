int n = int.Parse(Console.ReadLine());

int i, p, q, cnt = 0;
string s = "";

for(i=0; i<n; i++)
{
    s = Console.ReadLine();
    var obj = s.Split(" ");
    p = int.Parse(obj[0]);
    q = int.Parse(obj[1]);

    if (p + 2 <= q)
        cnt++;

}

Console.WriteLine(cnt);