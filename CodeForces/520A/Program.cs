string s = Console.ReadLine();
s = Console.ReadLine();
s = s.ToLower();
HashSet<char> chars = new HashSet<char>();
for(int i=0; i<s.Length; i++)
{
    chars.Add(s[i]);
}

if (chars.Count == 26)
    Console.WriteLine("YES");
else
    Console.WriteLine("NO");