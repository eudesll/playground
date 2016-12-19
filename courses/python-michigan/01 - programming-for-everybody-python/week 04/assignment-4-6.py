def computepay(h,r):
    if h < 0 or r < 0:
        return None
    elif h > 40:
        return (40 * r + (h - 40) * 1.5 * r)
    else:
        return (h*r)

h = float(raw_input("Enter Hours:"))
r = float(raw_input("Enter rate:"))
print computepay(h, r)