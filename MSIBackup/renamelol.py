import os

season = "AllMedia"
fileNames = os.listdir(season)
file = open("epinames.csv","r")

for fileName in fileNames:
    data = file.readline()
    info = data.replace("\n","").replace('"',"").split(", ")

    name = f"{season}/{fileName}"
    old = name.split(".")
    epiname = ""
    
    for i in info[1]:
        if i.isalpha() or i == " ":
            epiname = epiname+i
    new = f"{old[0]}-E{old[1]}-{epiname.replace(" ","_")}.mkv"
    print(new)

    os.rename(name, new)
file.close()


