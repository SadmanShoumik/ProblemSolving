int n, cnt;
string s = "";

cnt = 0;
n = int.Parse(Console.ReadLine());

for(int i = 0; i < n; i++)
{
    s = Console.ReadLine();
    if (s[0] == '+' || s[2] == '+')
        cnt++;
    else
        cnt--;
}

Console.WriteLine(cnt);
