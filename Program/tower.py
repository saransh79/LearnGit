# 6) Recursive Python function to solve the tower of hanoi

def TowerOfHanoi(n , source, auxiliary, destination):
    
	if n==1:
		print ("Move disk 1 from ",source,"to ",destination)
		return
	TowerOfHanoi(n-1, source, destination, auxiliary)
	print ("Move disk",n,"from ",source,"to ",destination)
	TowerOfHanoi(n-1, auxiliary, source, destination)
		
n=int(input("enter your number"))
TowerOfHanoi(n,'A','B','C')
