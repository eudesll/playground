# Use words.txt as the file name
fname = raw_input("Enter file name: ")
fh = open(fname)

for w in fh:
	print w.rstrip().upper()