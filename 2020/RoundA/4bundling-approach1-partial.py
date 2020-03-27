# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 15:03:31 2020

@author: Rushabh
"""

cnt=[0 for i in range(2000001)]
node=[[0]*26 for i in range(2000001)]
#print(len(node[0]))
k=0

def dfs(idx,height):
    global ans
    for i in range(26):
        if(node[idx][i]!=0):
            dfs(node[idx][i],height+1)
            cnt[idx]+=cnt[node[idx][i]]
    while cnt[idx]>=k:
        ans+=height
        cnt[idx]-=k
    

t=int(input())
start=0
m=1
for g in range(1,t+1):
    n,k=map(int,input().split())
    arr=[]
    for u in range(n):
        arr.append(input())
    #arr=[str(x) for x in input().split()]
    
    ans=0
    refill()
    for s in arr:
        u=0
        for i in s:
            if(node[u][ord(i)-65]==0):
                node[u][ord(i)-65]=m
                m+=1
            u=node[u][ord(i)-65]
            #print(u)
        cnt[u]+=1
    #print(node[0])
    #print(node[1])
    dfs(start,0)
    print('Case #{}: {}'.format(g,ans))
    start=m
