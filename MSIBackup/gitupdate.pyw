import  git 
import datetime
import os 
import subprocess
import platform

def get_connected_ssid():
    os_type = platform.system()
    try:
        if os_type == "Windows":
            result = subprocess.check_output(["netsh", "wlan", "show", "interfaces"], encoding="utf-8", errors='ignore')
            for line in result.split('\n'):
                if "SSID" in line:
                    ssid = line.split(":")[1].strip()
                    # print(f"Connected Wi-Fi SSID: {ssid}")
                    return ssid
        elif os_type in ["Linux", "Darwin"]:  # Darwin is the system name for macOS
            result = subprocess.check_output(["iwgetid", "-r"], encoding="utf-8", errors='ignore').strip()
            # print(f"Connected Wi-Fi SSID: {result}")
            return result
        else:
            # print("Unsupported operating system.")
            return None
    except subprocess.CalledProcessError:
        # print("Unable to get the SSID.")
        return None

wifiName = get_connected_ssid()



if(wifiName=="Iphone 14"):
    a = datetime.datetime.now()
    noww = a.strftime("%d / %m / %Y")
    folder = ["CPP","CProgramming","Python", "MyProjects","Bvoc","CodeShots"]

    for fol in folder:
        try:
            repo = git.Repo(fol)
            repo.git.add('--all')
            repo.git.commit('-m', noww, author='aadeshlokhande11@gmail.com')
            origin = repo.remote(name='origin')
            origin.push()
            print("just update",fol)
        except:
            print("updated",fol)
            
# ctrl + shift + Z ----------------> shutdown
os.system("slidetoshutdown")