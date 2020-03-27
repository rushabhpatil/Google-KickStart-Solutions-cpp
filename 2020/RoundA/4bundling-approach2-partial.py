# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 17:31:00 2020

@author: Rushabh
"""
from sys import stdin
ans=0

class node:
    def __init__(self):
        self.cnt=0
        self.li=[None]*26
    
def insert(s,head):
    cur=head
    n=len(s)
    for i in range(n):
        ch=ord(s[i])-65
        #print(ch)
        if(cur.li[ch]==None):
            cur.li[ch]=node()
        cur=cur.li[ch]
    cur.cnt+=1

def query(head,dep):
    sum=head.cnt
    global ans
    for i in range(26):
        if(head.li[i]):
            sum+=query(head.li[i],dep+1)
    
    while(sum>=k):
        sum-=k
        ans+=dep
    return sum


t=int(input())
#print(t)

for g in range(1,t+1):
    head=node()
    
    n,k=map(int,input().split())
    for i in range(n):
        s=stdin.readline().rstrip('\n')
        insert(s,head)
    
    query(head,0)
    print('Case #{}: {}'.format(g,ans))
