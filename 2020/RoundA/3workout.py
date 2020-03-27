# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 11:57:03 2020

@author: Rushabh
"""

arr=[]
k=0
ans=0

def ev(val):
    cnt=0
    for i in range(len(arr)-1):
        cnt+=(arr[i+1]-arr[i])//val
        if((arr[i+1]-arr[i])%val==0):
            cnt-=1
    return cnt<=k

def bin():
    
    lo=1
    hi=arr[len(arr)-1]
    while(lo<=hi):
        if(lo==hi):
            break
        mid=(lo+hi)//2
        if(ev(mid)):
            hi=mid
        else:
            lo=mid+1
    return hi


t=int(input())
for g in range(1,t+1):
    n,k=map(int,input().split())
    arr=[int(x) for x in input().split()]
    arr=np.asarray(arr)
    print('Case #{}: {}'.format(g,bin()))

