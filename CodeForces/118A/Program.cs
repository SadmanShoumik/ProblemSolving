string s = Console.ReadLine();
s = s.ToLower();

for(int i=0; i<s.Length; i++)
{
    if (s[i]>96 && s[i]<123)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else
            Console.Write($".{s[i]}");
    }
}