int n = int.Parse(Console.ReadLine());

string s = "";

for(int i=0; i<n; i++)
{
    if (i > 0)
        s = s + " that ";
    if (i % 2 == 0)
        s = s + "I hate";
    else if (i % 2 == 1)
        s = s + "I love";
}

s = s + " it";

Console.WriteLine(s);