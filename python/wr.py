f=open("teat.txt","w")
f.write("my first file\n")
f.write("This file\n\n")
f.write("contains three lines\n")
f=open("teat.txt",'r')
str=f.read()
print("read strings:",str)
f.close()

