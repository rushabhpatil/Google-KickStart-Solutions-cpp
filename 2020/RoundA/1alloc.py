# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 11:57:03 2020

@author: Rushabh
"""




t=int(input())
for g in range(1,t+1):
    n,b=map(int,input().split())
    arr=[int(x) for x in input().split()]
    arr.sort()
    ans=0
    for i in arr:
        b-=i
        if(b<0):
            break;
        ans+=1
    print('Case #{}: {}'.format(g,ans))


