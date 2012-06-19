C++ Builder XE2 MD5 Functions
=============================


Some simple MD5 functions within C++ Builder XE2 

Requirements:
============

1.cppxe2md5.h

2.md5.h


The two files are in Folder "libs" .

The source of md5.h is from http://bobobobo.wordpress.com/2010/10/17/md5-c-implementation/



Three Functions:
================

String StringToMD5String(String input);

String FileToMD5String(String path);

String TStreamToMD5String(TStream * inputstream);


