template<typename T>struct Treap{
    T val[100010];
	int size[100010],ls[100010],rs[100010],cnt;
	inline void lturn(int &root){
    	int temp=rs[root];
    	rs[root]=ls[temp];
    	ls[temp]=root;
    	size[temp]=size[root];
		size[root]=size[ls[root]]+size[rs[root]]+1;
		root=temp;
	}
	inline void rturn(int &root){
	    int temp=ls[root];
	    ls[root]=rs[temp];
	    rs[temp]=root;
	    size[temp]=size[root];
	    size[root]=size[ls[root]]+size[rs[root]]+1;
	    root=temp;
	}
	inline void maintain(int &root,bool flag){
	    if(!flag){
	        if(size[ls[ls[root]]]>size[rs[root]])rturn(root);
	        else if(size[rs[ls[root]]]>size[rs[root]])lturn(ls[root]),rturn(root);
	        else return ;
	    }else{
	        if(size[rs[rs[root]]]>size[ls[root]])lturn(root);
	        else if(size[rs[ls[root]]]>size[ls[root]])rturn(rs[root]),lturn(root);
	        else return ;
	    }
	    maintain(ls[root],false);
	    maintain(rs[root],true);
	    maintain(root,true);
	    maintain(root,false);
	}
	inline void insert(int &root,T x){
		if(!root){
 			root=++cnt;
			size[root]=1;
   			val[root]=x;
   			return;
 		}
    	size[root]++;
	    if(x<val[root])insert(ls[root],x);
	    else insert(rs[root],x);
	    maintain(root,x>=val[root]);
	}
	inline int del(int &root,T x){
	    size[root]--;
	    int temp;
	    if(x==val[root]||(x<val[root]&&!ls[root])||(x>val[root]&&!rs[root])){
	        temp=val[root];
	        if(!ls[root]||!rs[root])root=ls[root]+rs[root];
	        else val[root]=del(ls[root],val[root]+1);
	        return temp;
	    }
	    if(x<val[root])temp=del(ls[root],x);
	    else temp=del(rs[root],x);
	    return temp;
	}
	inline int find(int root,T x){
    	while(root){
    	    if(x<=size[ls[root]])root=ls[root];
    	    else if(x==size[ls[root]]+1)break;
    	    else x-=size[ls[root]]+1,root=rs[root];
    	}
    	return val[root];
	}
	inline int Rank(int root,T x){
    	int ans=0;
    	while(root){
        	if(x<=val[root])root=ls[root];
        	else ans+=size[ls[root]]+1,root=rs[root];
   		}
	    return ans;
	}
};
