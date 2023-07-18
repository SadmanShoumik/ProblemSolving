int n = int.Parse(Console.ReadLine());
string s = Console.ReadLine();
var obj = s.Split(" ");

int i;
int[] arr = new int[n];
int[] res = new int[n];
for(i = 0; i < n; i++)
{
    arr[i] = int.Parse(obj[i]);
    res[arr[i]-1] = i+1;
}

for(i = 0; i < n; i++)
{
    Console.Write(res[i]+" ");
}