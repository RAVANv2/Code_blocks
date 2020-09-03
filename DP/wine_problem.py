def profit_t_b(wine,i,j,y,dp):
	# Base Case
	if i >j:
		return 0

	# IF case is calculated first
	if dp[i][j]!=0:
		return dp[i][j]

	# Recusive case
	x = wine[i]*y + profit_t_b(wine,i+1,j,y+1,dp)
	y = wine[j]*y + profit_t_b(wine,i,j-1,y+1,dp)

	dp[i][j] = max(x,y)
	return dp[i][j]
 

def main():
	wine = [2,3,5,1,4]
	dp = [[0]*len(wine)]*len(wine)
	print(profit_t_b(wine,0,len(wine)-1,1,dp))

main()