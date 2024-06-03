int main()
{
    int n,r;
    int j = 0;
    int k = 0;
    int count = 0;
    scanf("%d", &n);
    char ch[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &r, &ch);

        while (1)
        {
            while (1)
            {
                printf("%c", ch[k]);
                count += 1;
                if (count == r)
                    break;
            }
            j += 1;
            k += 1;
            count = 0;
            if (ch[j] == '\0')
                break;
        }
        j = 0;
        printf("\n");
        
        k = 0;
    }
    
	return 0;
}