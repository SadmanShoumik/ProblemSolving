int[] arr = new int[3];
arr[0] = int.Parse(Console.ReadLine());
arr[1] = int.Parse(Console.ReadLine());
arr[2] = int.Parse(Console.ReadLine());

int res;

if (arr[0] == 1)
    arr[1] = arr[0] + arr[1];
if (arr[2] == 1)
    arr[1] = arr[1] + arr[2];
if (arr[1] == 1)
{
    if (arr[0] <= arr[2])
        arr[0] = arr[0] + arr[1];
    else
        arr[2] = arr[2] + arr[1];

}
res = arr[0] * arr[1] * arr[2];

Console.WriteLine(res);
