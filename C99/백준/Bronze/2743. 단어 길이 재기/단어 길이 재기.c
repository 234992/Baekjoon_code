int main()
{
    char a;
    char arr[100] = { 0 };
    scanf("%s", arr);
    int len = 0;
    for (int i = 0; i < 101; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d", len );
            break;
        }
        len++;
    }
    
    
    return 0;
}
