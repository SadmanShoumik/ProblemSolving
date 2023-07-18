string s = Console.ReadLine();
HashSet<char> chars = new HashSet<char>();

for (int i = 0; i < s.Length; i++)
{
    chars.Add(s[i]);
}

if (chars.Count % 2 == 0)
    Console.WriteLine("CHAT WITH HER!");
else
    Console.WriteLine("IGNORE HIM!");

