int n = int.Parse(Console.ReadLine());
string s1 =  Console.ReadLine();
var obj1  = s1.Split(" ");
string s2 = Console.ReadLine();
var obj2 = s2.Split(" ");

HashSet<string> set = new HashSet<string>();

for (int i = 1; i < obj1.Length; i++)
    set.Add(obj1[i]);

for (int i = 1; i < obj2.Length; i++)
    set.Add(obj2[i]);

if (set.Count == n)
    Console.WriteLine("I become the guy.");
else
    Console.WriteLine("Oh, my keyboard!");
