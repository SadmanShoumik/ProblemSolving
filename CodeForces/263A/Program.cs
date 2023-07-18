/*var line = Console.ReadLine();
var data = line.Split(' ');*/

int i, j, x, res;
string s="";
res = 0;

for(i=0; i<5; i++)
{
    j = 0;
    s = Console.ReadLine();
    for(x=0; x<s.Length; x++)
    {
        if (s[x] == '0')
            j++;
        else if (s[x]=='1')
        {
            res = Math.Abs(i - 2) + Math.Abs(j - 2);
            break;
        }
    }
}

Console.WriteLine(res);

