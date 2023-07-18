string s = Console.ReadLine();
int i, cnt;
cnt = 0;

for(i=1; i<s.Length; i++)
{
    if (s[i] == s[i - 1])
        cnt++;
    else
        cnt = 0;

    if(cnt>=6)
    {
        Console.WriteLine("YES");
        break;
    }
}

if (cnt < 6)
    Console.WriteLine("NO");