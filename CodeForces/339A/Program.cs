var s = Console.ReadLine();
var obj = s.Split('+');

int[] arr = new int[obj.Length];

for(int i=0; i<obj.Length; i++)
{
    arr[i] = int.Parse(obj[i]);
}

Array.Sort(arr);

for (int i = 0; i < arr.Length; i++)
{
    Console.Write(arr[i]);
    if (i != arr.Length - 1)
        Console.Write("+");
}