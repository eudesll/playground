h = float(raw_input("Enter Hours:"))
r = float(raw_input("Enter Rate:"))

if h > 40:
	print 40 * r + (h - 40) * 1.5 * r
else:
	print h * r