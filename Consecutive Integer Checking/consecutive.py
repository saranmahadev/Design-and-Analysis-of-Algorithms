def main():
    print("Find the GCD")

    m = int(input("Enter a Number:"))
    n = int(input("Enter a Number:"))

    if m<n:
        t = m
    else:
        t = n


    while True:
        if m%t == 0 and n%t == 0:
            print(t)
            break           
        else:
            t=t-1    



    

main()