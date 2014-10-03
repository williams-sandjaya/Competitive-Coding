/*
In graph theory, a k-ary tree is a rooted tree in which each node has no more than k children. 
It is also sometimes known as a k-way tree, an N-ary tree, or an M-ary tree. A binary tree is the special case where k=2.
A complete k-ary tree is a k-ary tree which is maximally space efficient. 
It must be completely filled on every level (meaning that each level has k children) 
except for the last level (which can have at most k children). 
However, if the last level is not complete, then all nodes of the tree must be "as far left as possible". 
*/

/*
A complete k-ary tree is a k-ary tree in which all leaves have same depth 
and all internal nodes have degree k. This k is also known as the branching factor of a tree.
*/

#include<stdio.h>
int main(){
	int c,t,a,b;
	scanf("%d",&c);
	while(c--){
		scanf("%d%d%d",&t,&a,&b); // t is k here
		while(a!=b){
			if(a>b)
            a=(a+t-2)/t;
			else 
            b=(b+t-2)/t;
		}
		printf("%d\n",a);
	}
	return 0;
}
