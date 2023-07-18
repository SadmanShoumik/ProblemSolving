int n, cnt;
cnt = 0;
n = int.Parse(Console.ReadLine());
string s = Console.ReadLine();

for(int i=0; i<s.Length-1; i++)
{
    if (s[i] == s[i + 1])
        cnt++;
}

Console.WriteLine(cnt);