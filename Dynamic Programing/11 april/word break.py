n=int(input())
dictionary= set(input().split());
s= input().split()
length= len(s)

dp=[0]*(length+1)
dp[0]=1
for i in range(1,length+1):
    for j in range (i):
        if dp[j]==1 and s[j:i]in dictionary:
            dp[i]=1
            break;

print(dp[length])
