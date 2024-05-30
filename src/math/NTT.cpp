﻿poly omega[25]; // 单位根

// n 是 DFT 的最大长度
// 例如如果最多有两个长为 k 的多项式相乘，或者求逆的长度为 k，那么 n 需要 >= 2k
void ntt_init(int n) {
	for (int k = 2, d = 0; k <= n; k *= 2, d++) {
		omega[d].resize(k + 1);

		int wn = qpow(3, (p - 1) / k), tmp = 1;
		for (int i = 0; i <= k; i++) {
			omega[d][i] = tmp;
			tmp = (long long)tmp * wn % p;
		}
	}
}

// 传入的必须是 [0, p) 范围内，不能有负的，不然会溢出
// 不能保证就把 d == 16 改成 d % 8 == 0 之类
void ntt(int *c, int n, int t) {
	static ull a[MAXN];
	for (int i = 0; i < n; i++) a[i] = c[i];

	for (int i = 1, j = 0; i < n - 1; i++) {
		int k = n;
		do
			j ^= (k >>= 1);
		while (j < k);

		if (i < j)
			swap(a[i], a[j]);
	}

	for (int k = 1, d = 0; k < n; k *= 2, d++) {
		if (d == 16)
			for (int i = 0; i < n; i++)
				a[i] %= p;

		for (int i = 0; i < n; i += k * 2)
			for (int j = 0; j < k; j++) {
				int w = omega[d][t > 0 ? j : k * 2 - j];
				ull u = a[i + j], v = w * a[i + j + k] % p;
				a[i + j] = u + v;
				a[i + j + k] = u - v + p;
			}
	}
		
	if (t > 0) {
		for (int i = 0; i < n; i++)
			c[i] = a[i] % p;
	}
	else {
		int inv = qpow(n, p - 2);
		for (int i = 0; i < n; i++)
			c[i] = a[i] * inv % p;
	}
}
