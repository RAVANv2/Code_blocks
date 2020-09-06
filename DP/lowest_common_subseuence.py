def lcs(one,two):
	row = len(one)
	col = len(two)

	# Base Case of DP
	dp = [[0]*(col+1)]*(row+1)

	for i in range(1,row+1):
		for j in range(1,col+1):
			q = 0
			if one[i-1] == two[j-1]:
				q = 1 + dp[i-1][j-1]
			else:
				q = max(dp[i][j-1],dp[i-1][j])
			dp[i][j] = q
	return dp[row][col]


def main():
	one = "nematode"
	two = "empty"
	print(lcs(one,two))
main()