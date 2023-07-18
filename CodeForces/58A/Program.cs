string s1 = "hello";
string s2 = Console.ReadLine();
int i, j;
j = 0;

for(i=0; i<s2.Length; i++)
{
    if (s2[i] == s1[j])
    {
        j++;
        if (j == 5)
            break;
    }
}

if (j < 5)
    Console.WriteLine("NO");
else
    Console.WriteLine("YES");