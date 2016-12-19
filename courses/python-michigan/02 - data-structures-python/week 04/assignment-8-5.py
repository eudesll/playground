fhand = raw_input("Enter filename: ")
fh = open(fhand)

lst = []

for line in fh:
    line = line.strip()

    if line == '' : continue
    words = line.split()
    if len(words) == 0 : continue
    if words[0] != 'From': continue
    lst.append(words[1])
    print words[1]
    
print  "There were", len(lst), "lines in the file with From as the first word"