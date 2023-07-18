void check(string s)
{
    for (int i = 0; i < s.Length; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            Console.WriteLine("YES");
            return;
        }
    }
    Console.WriteLine("NO");
}

string s =  Console.ReadLine();

check(s);