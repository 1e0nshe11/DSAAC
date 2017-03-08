// 29.1)
int stepCount = 0;
void d(int x[], int n)
{
	for (int i = 0; i < n; i += 2)
	{
		stepCount++;
		x[i] += 2;
		stepCount++;
	}
	stepCount++;
	int i = 1;
	stepCount++;
	while (i < n / 2)
	{
		stepCount++;
		x[i] += x[i + 1];
		stepCount++;
		i++;
		stepCount++;
	}
	stepCount++;
}

// 2)
int stepCount = 0;
void d(int x[], int n)
{
	for (int i = 0; i < n; i += 2)
		stepCount+=3;
	stepCount+=2;
	int i = 1;
	while (i < n / 2)
		stepCount+=3;
	stepCount++;
}

// 3)
//  3n+3
