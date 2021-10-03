class Solution:
    def shortestAlternatingPaths(self, n: int, re: List[List[int]], be: List[List[int]]) -> List[int]:
        inf=float("inf")
        from collections import defaultdict
        g=defaultdict(set)
        
        for s,d in re:
            g[s].add((d,'r',))

        for s,d in be:
            g[s].add((d,'b',))
                
        d=[inf]*n
        q=[]
        v=set()
        v.add((0,'r',))
        v.add((0,'b',))
        
        q.append((0,None,))
        level=0
        
        while q:
            s=len(q)
            level+=1
            
            while s>0:
                n,c=q.pop(0)
                for m,b in g[n]:
                    if c!=b and (m,b) not in v:
                        d[m]=min(d[m],level)
                        q.append((m,b,))
                        v.add((m,b,))
               
                s-=1
        d[0]=0
        return list(map(lambda x:-1 if x==inf else x,d))
        
