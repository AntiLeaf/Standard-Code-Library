// Dinic Maximum Flow 最大流（Dinic版本） O(n^2 m)
// By AntiLeaf
// 注意Dinic适用于二分图或分层图，对于一般稀疏图ISAP更优，稠密图则HLPP更优


struct edge{int to,cap,prev;}e[maxe<<1];


int last[maxn],len=0,d[maxn],cur[maxn],q[maxn];
memset(last,-1,sizeof(last));


void addedge(int x,int y,int z){
	AddEdge(x,y,z);
	AddEdge(y,x,0);
}


void AddEdge(int x,int y,int z){
	e[len].to=y;
	e[len].cap=z;
	e[len].prev=last[x];
	last[x]=len++;
}


int Dinic(){
	int flow=0;
	while(bfs(),d[t]!=-1){
		memcpy(cur,last,sizeof(int)*(t+5));
		flow+=dfs(s,(~0u)>>1);
	}
	return flow;
}


void bfs(){
	int head=0,tail=0;
	memset(d,-1,sizeof(int)*(t+5));
	q[tail++]=s;
	d[s]=0;
	while(head!=tail){
		int x=q[head++];
		for(int i=last[x];i!=-1;i=e[i].prev)
            if(e[i].cap>0&&d[e[i].to]==-1){
                d[e[i].to]=d[x]+1;
                q[tail++]=e[i].to;
            }
	}
}


int dfs(int x,int a){
	if(x==t||!a)return a;
	int flow=0,f;
	for(int &i=cur[x];i!=-1;i=e[i].prev)
        if(e[i].cap>0&&d[e[i].to]==d[x]+1&&(f=dfs(e[i].to,min(e[i].cap,a)))){
            e[i].cap-=f;
            e[i^1].cap+=f;
            flow+=f;
            a-=f;
            if(!a)break;
        }
	return flow;
}