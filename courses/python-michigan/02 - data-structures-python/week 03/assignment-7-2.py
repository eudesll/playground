# Use the file name mbox-short.txt as the file name
fname = raw_input("Enter file name: ")
fh = open(fname)
avg = 0
count = 0

for line in fh:
    if not line.startswith("X-DSPAM-Confidence:") : continue
        
    value = float(line.rstrip()[20:])
    avg += value
    count += 1
    
print "Average spam confidence:", avg / count