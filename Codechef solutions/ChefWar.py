def game(h,p):
  h=h-p
  if(h<0):
      h=0
  p=p//2
  return h,p
try:
  t=int(input())
  for i in range(t):
      h,p=map(int,input().split())
      # if(h==1 and p==1):
      #     print(1)
      if(1==1):
          while(h!=0 and p!=0):
              (h,p)=game(h,p)
          if(p==0 and h!=0):
              print(0)
          elif(h==0 and p!=0):
              print(1)
          elif(p==0 and h==0):
              print(1)
except:
  pass
