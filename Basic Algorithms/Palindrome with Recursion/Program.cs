void IsPal(string str, int s, int e)
{
    if (s >= e)
    {
        Console.WriteLine("YES");
        return;
    }

    if (str[s] != str[e])
    {
        Console.WriteLine("NO");
        return;
    }
    else
        IsPal(str, s + 1, e - 1);
}

string s = Console.ReadLine();
s = s.ToLower();

IsPal(s, 0, s.Length-1);