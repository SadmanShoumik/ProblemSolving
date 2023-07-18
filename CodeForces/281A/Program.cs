string s = Console.ReadLine();

if (s[0] > 96)
    Console.Write((char)(s[0] - 32));
else
    Console.Write(s[0]);

for(int i  = 1; i < s.Length; i++)
    Console.Write(s[i]);