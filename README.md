# Access-control-system-calls-modification
@author George Kokolakis csd4254 (gkokol@ics.forth.gr)


Exercise 1 : fully implemented ✔️

ONE IMPORTANT implementation detail : 
In my implementation , im checking for each second! if the tracee
has executed the system calls more times than the allowed number 
using a thread , and im printing a suspect message.
(you said me that my solution is acceptable and not to change it). 
More : The thread im using fills with 0 the array that keeps how 
many times a system call is called every one second.



Exercise 2 : fully implemented ✔️

Definition of structs and helper functions are in file acces_control_system.h
Implementation of the functitons  is at the file read_write.c

Im tracking files at path /mnt/documents

Brief implementation details : When a user opens or close a file in the path /mnt/documents i generate
a file filename.username , if it is the first that the current user opens or close the current file
a message ALERT... is generated. Every time a user changes a file im renaming the filename.username 
file to the last user changed the current file. 

How to check the program : I provide you the test.c file that , makes an open and close to a file.
First from a user run the test.c and see that at /mnt/documents tracking file is generated and also
an alert message is generated. Then change user with logout and run the same program to see that the 
previous tracking file now is renamed with last users name , that modified the current file.
Be careful with permissions problems. the filename.user file is chmod 777 by the code and also the 
test.c makes chmod 777 for the file that is opened and closed.

Also a script compile_and_run.sh is provided that compiles and runs qemu automatically.(if you need it)

