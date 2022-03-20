import cv2
import numpy
import subprocess

#subprocess.call('start', shell=True)

img = cv2.imread('C:\\Python27\\test_2.png',0)
#img.astype(int)
numpy.savetxt("C:\\Python27\\VLC_1.txt",img,fmt="%i")
subprocess.Popen("C:\\Python27\\cmd_2.py 1", shell=True)
