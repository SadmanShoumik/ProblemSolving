int n = int.Parse(Console.ReadLine());

int[] lucky = new int[] {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

for (int i = 0; i < lucky.Length; i++)
{
    if (n % lucky[i] == 0)
    {
        n = -1;
        break;
    }
}

if (n < 0)
    Console.WriteLine("YES");
else
    Console.WriteLine("NO");