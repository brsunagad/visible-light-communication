import cv2
import numpy
import subprocess
import os
import time

#subprocess.call('start', shell=True)

img = cv2.imread('C:\\Users\\Ashwin TR\\Downloads\\VLC_img4.jpg',0)
img.astype(int)
numpy.savetxt("C:\\Users\\Ashwin TR\\Downloads\\VLC.txt",img,fmt="%i")

#os.chdir("C:\\Users\\Ashwin TR\\Downloads")
#os.system("mode COM3 BAUD=9600 PARITY=n DATA=8 & copy VLC.txt \\.\COM3")

p1=subprocess.Popen("mode COM3 BAUD=9600 PARITY=n DATA=8 TIMEOUT=1 & copy VLC.txt /B \\.\COM3", cwd='C:\\Users\\Ashwin TR\\Downloads', shell=True)
print(p1)
#p.communicate()
#p1=subprocess.Popen('vlc.BAT', cwd='C:\\Users\\Ashwin TR\\Downloads', shell=True)
#subprocess.Popen('cd C:\\Users\\Ashwin TR\\Documents', shell=True)
#p2=subprocess.Popen('mode COM3 BAUD=9600 PARITY=n DATA=8', shell=True)
#p3=subprocess.Popen('copy VLC.txt \\.\COM3', shell=True)
#p1.kill()
#p2.kill()
#p3.kill()
