FROM ubuntu:20.04

RUN apt update -y \
    && apt upgrade -y \
    && apt install -y socat wget
RUN wget https://raw.githubusercontent.com/owlinux1000/pwncat/master/pwncat -O /usr/local/bin/pwncat && chmod +x /usr/local/bin/pwncat
COPY . /root
WORKDIR /root

EXPOSE 4444
ENV FLAG='Cyb3rSec{go0d_job_to_st@rt}'

CMD ["/usr/local/bin/pwncat", "./litmus.o", "-p", "4444"]

