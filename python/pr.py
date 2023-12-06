f=open("teat.txt","w")
f.write("priya v\n")
f.write("piravom\n\n")
f.write("752334556\n")
f=open("teat.txt",'r')
str=f.read()
print("read strings:",str)
f.close()


