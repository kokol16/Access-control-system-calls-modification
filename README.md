# Access-control-system-calls-modification
Exercise 2 : fully implemented ✔️

Definition of structs and helper functions are in file acces_control_system.h
Implementation of the functitons  is at the file read_write.c

Im tracking files at path /mnt/documents

Brief implementation details : When a user opens or close a file in the path /mnt/documents i generate
a file filename.username , if it is the first that the current user opens or close the current file
a message ALERT... is generated. Every time a user changes a file im unlinking  the previous  filename.username 
file and create a new one with the new user.

How to check the program : I provide you the a write.c  file that writes to  a file on root folder ,
and a close.c file on user1 that closes the same file .
First from root run write.c that generates a test1.txt and a test1.txt.root file , also a message ALERT...
is printed on logs. Then logout , go to user1 and run close.c . Then you will see on /mnt/documents the 
file test1.txt.root to have been deleted and replaced by test1.txt.user1 . Also an alert is generated
as user1 closed the current file for the first time.

Be careful with permissions problems. the filename.user file is chmod 777 by the code and also the 
write.c and close.c makes chmod 777 for the file that is opened and closed.

Also a script compile_and_run.sh is provided that compiles and runs qemu automatically.(if you need it)

