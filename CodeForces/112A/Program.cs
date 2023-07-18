string s1, s2;

s1 = Console.ReadLine();
s2 = Console.ReadLine();
s1 = s1.ToLower();
s2 = s2.ToLower();

int res;

res = string.Compare(s1, s2);

Console.WriteLine($"{res}");

