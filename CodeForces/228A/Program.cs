string s = Console.ReadLine();
var obj = s.Split(" ");

HashSet<string> colors = new HashSet<string>();

for(int i=0; i<4; i++)
    colors.Add(obj[i]);

int res = 4-colors.Count;
Console.WriteLine(res);
