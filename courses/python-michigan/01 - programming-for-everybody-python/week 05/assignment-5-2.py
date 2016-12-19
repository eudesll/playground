largest = None
smallest = None
while True:
    try:
        num = raw_input("Enter a number: ")
        if num == 'done':
            break;
            
        n = int(num)
        
        largest = n if largest < n or largest == None else largest
        smallest = n if smallest > n or smallest == None else smallest
    except:
        print "Invalid input"

print "Maximum is", largest
print "Minimum is", smallest