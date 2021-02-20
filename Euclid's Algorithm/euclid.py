def main():
	print("Enter Two Number To Find GCD")
	m = int(input("Enter a Number:")) 
	n = int(input("Enter a Number:")) 
	if m<n:
		m,n = n,m

	while n!=0:	
		r = m%n
		m = n 
		n = r 

	print("GCD",m)
	



if __name__ == '__main__':
	main()