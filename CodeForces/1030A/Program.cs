void meh(string line)
{
    for(int i=0; i<line.Length; i++)
    {
        if (line[i]=='1')
        {
            Console.WriteLine("HARD");
            return;
        }
    }
    Console.WriteLine("EASY");
}

int n = int.Parse(Console.ReadLine());
string line = Console.ReadLine();

meh(line);

