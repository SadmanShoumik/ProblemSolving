string s = Console.ReadLine();

int i, cntu, cntl;
cntu = cntl = 0;

for(i=0; i<s.Length; i++)
{
    if (s[i] > 96 && s[i] < 123)
        cntl++;
    else
        cntu++;
}

if (cntu > cntl)
    Console.WriteLine(s.ToUpper());
else
    Console.WriteLine(s.ToLower());