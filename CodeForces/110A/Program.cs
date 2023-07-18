string s = Console.ReadLine();
int cnt = 0;

for(int i = 0; i < s.Length; i++)
{
    if (s[i]=='4' || s[i]=='7')
        cnt++;
}

s = cnt.ToString();
cnt = 1;
for (int i = 0; i < s.Length; i++)
{
    if (s[i] != '4' && s[i] != '7')
    {
        cnt = -1;
        break;
    }
}

if (cnt == 1)
    Console.WriteLine("YES");
else
    Console.WriteLine("NO");