//libreria dinamica
void *tmp;
tmp = dlopen(path,RTLD_LAZY); //load library
void *fun = dlsym(tmp,"main");//get function address
int ret = ((int(*)(int,char*))fun)(argc-1,argv+1); //call and return



//pid from string
pid_t pid=(pid_t) atoi(argv[1]); //convert argument to int and to pid_t

//signal value
union sigval value;
value.sival_ptr = (void *) message;

//signal handler
struct sigaction act;
act.sa_sigaction=SigHandler;
act.sa_flags = SA_SIGINFO;
int status=sigaction(SIGUSR1, &act, NULL);

void SigHandler(int sig, siginfo_t *info, void *uconte)
{
}

//realpath
char resolved_path[PATH_MAX];
realpath(argv[1], resolved_path);

//copy a file
struct stat s;
stat(resolved_path, &s)
sendfile(linkfd, realfd, NULL, s.st_size) //from real to link

//open directory and loop through - fd - DIR - opanat - fdopendir - dirent
int fd; //file descriptor
DIR *dstream;
struct dirent *dirStruct;

fd=openat(dirfd, pathname, 0);
dstream = fdopendir(fd);

while( (dirStruct=readdir(dstream)) != NULL) //loop through all
//dirStruct->d_type == DT_DIR 


//crea un processo e esegui- execvp - waitpid - WEXITSTATUS
pid_t pid;
switch(pid=fork())
{
	case -1:
		exit(1);
		break;
	case 0:
		//figlio	
		execvp(file, newArgv);				
		break;
	default:
		//padre
		if(waitpid(pid, &wstate, 0) == -1)
		{
			printf("wait error\n");
			exit(1);
		}								
		exitStatus=WEXITSTATUS(wstate);				
		break;				
}





//get time in millisec - tempo in millisecondi
#include <sys/time.h>
struct timeval startTime, endTime;
int mSec;

gettimeofday(&startTime, NULL);
gettimeofday(&endTime, NULL);
mSec=((endTime.tv_sec-startTime.tv_sec)*1000)+((endTime.tv_usec-startTime.tv_usec)/1000);
