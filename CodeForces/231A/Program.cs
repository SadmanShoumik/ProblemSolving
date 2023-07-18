int n, cnt = 0;

n = Convert.ToInt32(Console.ReadLine());

string s = "";

while(n > 0)
{
    n--;
    s = Console.ReadLine();
    if (s == "1 1 1" || s == "1 1 0" || s == "1 0 1" || s == "0 1 1")
        cnt++;
}

Console.WriteLine(cnt);