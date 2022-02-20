import os

pid = os.fork()



if pid:
	status = os.wait()
	print("\nIN parent process -")
	print("Terminated child's process id:", os.getpid(), os.getppid())
	
else:
	print("--------------In CHild process ---------")
	print("\t\t\t Process ID:", os.getpid(), os.getppid())
