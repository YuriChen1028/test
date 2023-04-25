import os
import hashlib
from Crypto.PublicKey import RSA

file1_name = '1.bin' 
file2_name = '2.bin' 
file3_name = 'temp.bin'

if os.path.exists(file1_name) and os.path.exists(file2_name): 
    file1 = open(file1_name, 'rb') 
    file2 = open(file2_name, 'rb') 
    file3 = open(file3_name, 'wb') 
    file3.write(file1.read()) 
    file3.write(file2.read()) 
    file3.close() 
    file2.close() 
    file1.close() 
    print('合并完成') 
else: print('文件不存在')