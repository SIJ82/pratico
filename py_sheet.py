#!/usr/bin/env python3 
import sys,os,magic

if __name__ == "__main__":

len(sys.argv)

#- os
os.path.isdir(path)  #check if is a dir
os.path.isfile(path):
os.path.join(dirpath, filename)
os.listdir(path)	#list directory
os.path.getsize(path)	#get size of directory or file
os.access(filepath, os.X_OK) #check permission
for (dirpath, dirnames, filenames) in os.walk(path): #walk throug a subtree
os.path.getmtime(path)	#get last mod time
if os.fork() == 0:
        os.execlp(argv[0], *argv) #exec a child
os.wait()
inode = os.lstat(path).st_ino #get inode
os.remove(path) #delete dir or file
s.link(data[content], path) #hard link


if("ELF" in magic.from_file(path)): #get filetype from filepath
#files dictorany by type
files = dict()
for key, value in files.items():

files[magic.from_file(f)]=[]
files[magic.from_file(f)].append(f)
#---




import subprocess
subprocess.call(filepath, shell=True)
out = subprocess.check_output(['getent', 'passwd']) #get output of a command

import pwd

def ismine(path):
    return pwd.getpwuid(os.stat(path).st_uid).pw_name == os.getlogin()


import time

print(time.strftime("%m/%d/%Y %H:%M:%S", time.localtime(result[0])))

try:
  print(x)
except:
  print("An exception occurred") 

