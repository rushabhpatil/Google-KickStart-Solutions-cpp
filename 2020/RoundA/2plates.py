# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 11:57:03 2020

@author: Rushabh
"""

t=int(input())
for g in range(1,t+1):
    n,k,p=map(int,input().split())
    st=[]
    for i in range(n):
        st.append([int(i) for i in input().split()])
        
    #presum=np.zeros((n,k+1),dtype=int)
    presum=[]
    for i in range(n):
        x=[0]*(k+1)
        for j in range(k):
            x[j+1]=x[j]+st[i][j]
        presum.append(x)
        
    x=[0]*(p+1)
    y=[0]*(p+1)
    for i in range(n):
        x,y=y,x
        for j in range(p+1):
            for h in range(k+1):
                if(j>=h):
                    x[j]=max(x[j],y[j-h]+presum[i][h])
    print('Case #{}: {}'.format(g,x[p]))


