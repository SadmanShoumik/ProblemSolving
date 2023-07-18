bool dis(string year)
{
    char[] carr = year.ToCharArray();
    int[] arr = new int[4];
    int i, j;
    bool b;
    b = true;
    for(i=0; i<4; i++)
    {
        arr[i] = Convert.ToInt32(carr[i]);
    }
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if (arr[i] == arr[j])
            {
                b = false;
                break;
            }
        }
    }
    return b;
}


string s = Console.ReadLine();
int i, n;
n = int.Parse(s);
bool b;
for(i=n+1; i<=9999; i++)
{
    s = new string(i.ToString());
    b = dis(s);
    if (b == true)
        break;
}

Console.WriteLine(i);