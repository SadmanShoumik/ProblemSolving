string s1 = Console.ReadLine();
string s2 = Console.ReadLine();
string s3 = "";

for(int i =0; i<s1.Length; i++)
{
    if (s1[i] == s2[i])
        s3 = s3 + "0";
    else
        s3 = s3 + "1";
}

Console.WriteLine(s3);