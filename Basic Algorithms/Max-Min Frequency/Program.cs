string s = Console.ReadLine();
var obj = s.Split(" ");

int i;
int[] arr = new int[obj.Length];
Dictionary<int, int> dictionary = new Dictionary<int, int>();


for (i=0; i<obj.Length; i++)
{
    arr[i] = int.Parse(obj[i]);

    if (dictionary.ContainsKey(arr[i]))
        dictionary[arr[i]]++;
    else
        dictionary.Add(arr[i], 1);
}

foreach(var item in dictionary)
{
    Console.WriteLine(item.Key + " --- " + item.Value);
}
