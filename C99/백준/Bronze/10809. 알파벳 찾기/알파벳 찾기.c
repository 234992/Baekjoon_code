int main()
{
	char ch[101] = "";
	scanf("%s", &ch);
	int ans[26];
	for (int i = 0; i < 26; i++)
		ans[i] = -1;
	for (int j = 0; j < 101; j++)
	{
		if (ch[j] == '\0')
			break;
		int n = ch[j] - 'a';
        if(ans[n]==-1)
        ans[n] = j;
	}
    for (int i = 0; i < 26; i++)
        printf("%d ", ans[i]);
	
	return 0;
}