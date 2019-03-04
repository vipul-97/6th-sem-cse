import os

for file in os.listdir('.'):
    new = str(file).replace('%',' ')
    os.rename(file,new)
    
