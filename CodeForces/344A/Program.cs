int n = int.Parse(Console.ReadLine());

int i, cnt = 0;
char c = '2';
for(i=0; i<n; i++)
{
    string s = Console.ReadLine();
    if (s[0]==c)
        cnt++;
    c = s[1];
}
cnt++;

Console.WriteLine(cnt);