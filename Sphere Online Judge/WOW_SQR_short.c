long long T,n,k,y,x,i,X,Y,a;main(){scanf("%u",&T);while(T--){scanf("%ld",&n);a=0;for(i=2;i<=n/i;++i){k=n/(i*i);y=k*i*i;x=k*(i-1)*(i-1);if(x*y>a)a=x*y,X=x,Y=y;}printf("%lld*%d\n",X,Y);}}
