void xoaPhanTuTrung(int n, int mang[]){
    int k = 0, i = 0, j = 0;
    for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (mang[i] == mang[j])
			{
				for (k = i; k < n; k++) 
				{
					mang[k] = mang[k + 1];
					n--;
					i--;
				}
			}
		}
	}
	printf("\nmang sau khi xoa la:\n");
	for (i = 0; i < n; i++) 
	{
		printf(" %d ", mang[i]);
	}
}
