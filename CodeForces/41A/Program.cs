string s1 = Console.ReadLine();
string s2 = Console.ReadLine();

char[] arr = s1.ToCharArray();
Array.Reverse(arr);
s1 = new string(arr);

if (s1 == s2)
    Console.WriteLine("YES");
else
    Console.WriteLine("NO");