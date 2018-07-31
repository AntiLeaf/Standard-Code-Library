//Palindromic Tree/EERTREE ������ O(n)
//By ysf
//ͨ����Ŀ��APIO2014 ���Ĵ�

//����һ���ַ������ʲ�ͬ�Ļ����Ӵ�������O(n)��
//ע�������ֻ��Ҫ��һ����㣬����������һ�����õ�bfs��

//ȫ�����鶨��
int val[maxn],par[maxn],go[maxn][26],last,cnt;
char s[maxn];

//��Ҫ������������ǰ��һ��Ҫ�������³�ʼ��
par[0]=cnt=1;
val[1]=-1;

//extend���� ��̯O(1)
//�����չһ���ַ�
//�����Ӧ�±�
void extend(int n){
	int p=last,c=s[n]-'a';
	while(s[n-val[p]-1]!=s[n])p=par[p];
	if(!go[p][c]){
		int q=++cnt,now=p;
		val[q]=val[p]+2;
		do p=par[p];while(s[n-val[p]-1]!=s[n]);
		par[q]=go[p][c];
		last=go[now][c]=q;
	}
	else last=go[p][c];
	a[last]++;
}
