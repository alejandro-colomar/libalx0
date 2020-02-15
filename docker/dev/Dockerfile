FROM		alejandrocolomar/libalx:devel
WORKDIR	/tmp
RUN		git clone https://github.com/libalx.git		&& \
		make		-C libalx	-j 8			&& \
		make install	-C libalx				&& \
		rm -rf libalx


## Use this container to build programs that depend on libalx.
## These commands need to be called from the parent directory where the
## programs are.
# docker container run --user $(id -u):$(id -g) --tty --interactive --volume $PWD:$PWD --workdir $PWD --name code alejandrocolomar/debian:testing-code bash
# docker container start code
# docker container exec --user root --workdir $PWD code make install --directory libalx
# docker container exec --user root --tty --interactive --workdir $PWD code bash
# docker container attach code