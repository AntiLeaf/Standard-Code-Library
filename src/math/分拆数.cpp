int b = sqrt(n);
ans[0] = tmp[0] = 1;

for (int i = 1; i <= b; ++i) {
	for (int rep = 0; rep < 2; ++rep)
		for (int j = i; j <= n - i * i; ++j)
			add(tmp[j], tmp[j - i]);

	for (int j = i * i; j <= n; ++j)
		add(ans[j], tmp[j - i * i]);
}

// -----

long long a[100010];
long long p[50005]; // 欧拉五边形数定理

int main() {
	p[0] = 1;
	p[1] = 1;
	p[2] = 2;
	int i;
	for (i = 1; i < 50005; i++) { // 递推式系数1,2,5,7,12,15,22,26...i*(3*i-1)/2,i*(3*i+1)/2
		a[2 * i] = i * (i * 3 - 1) / 2; // 五边形数为1,5,12,22...i*(3*i-1)/2
		a[2 * i + 1] = i * (i * 3 + 1) / 2;
	}
	for (i = 3; i < 50005; i++) { // p[n]=p[n-1]+p[n-2]-p[n-5]-p[n-7]+p[12]+p[15]-...+p[n-i*[3i-1]/2]+p[n-i*[3i+1]/2]
		p[i] = 0;
		int j;
		for (j = 2; a[j] <= i; j++) { //有可能为负数, 式中加1000007
			if (j & 2)
				p[i] = (p[i] + p[i - a[j]] + 1000007) % 1000007;
			else
				p[i] = (p[i] - p[i - a[j]] + 1000007) % 1000007;
		}
	}
	int n;
	while (~scanf("%d", &n))
		printf("%lld\n", p[n]);
}