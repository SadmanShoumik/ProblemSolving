
void rev(int s, int e, params object[] obj)
{
    if(s>=e)
        return;

    var temp = obj[0];

    temp = obj[s];
    obj[s] = obj[e];
    obj[e] = temp;

    rev(s + 1, e - 1, obj);

}

string s = Console.ReadLine();

var obj = s.Split(" ");

rev(0, obj.Length-1, obj);

for(int i = 0; i < obj.Length; i++ )
{
    Console.Write(obj[i] + " ");
}