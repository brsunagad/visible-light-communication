import subprocess

subprocess.call('mode COM3 BAUD=9600 PARITY=n DATA=8', shell=True)
subprocess.call('copy VLC_1.txt \\.\COM3', shell=True)
