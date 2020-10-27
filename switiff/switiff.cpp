#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "liburing.h"

struct switiff {
	struct io_uring ring;
	int fd;
	struct io_uring_sqe *sqe;
	struct io_uring_cqe *cqe;
	char *filename;

	int openTiff(){
		int ret = io_uring_queue_init(4, &ring, 0);
		if(ret < 0){
			fprintf(stderr, "queue_init: %s\n", strerror(-ret));
		}

		fd = open(filename, O_RDONLY | O_DIRECT);
		if (fd < 0) {
			perror("open");
			return 1;
		}
		return fd;
	}

};


int main(int argc, char *argv[]){


	return 0;
}
