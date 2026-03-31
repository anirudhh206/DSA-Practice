s1= input().strip()
s2= input().strip()
s3= input().strip()

n, m, l= len(s1), len(s2), len(s3)

# creating 3D array for the DP table
dp =[[[0]*(l+1) for _ in range(m+1)] for __ in range(n+1)]

for i in range(1,m+1):
    for j in range(1,n+1):
        for k in range(1,l+1):
            if s1[i-1]==s2[j-1]==s3[k-1]:
                dp[i][j][k]=1+dp[i-1][j-1][k-1]
            else:
                dp[i][j][k]=max(dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1])

print(dp[m][n][l])