FROM ubuntu:20.04

RUN apt update -y \
    && apt upgrade -y \
    && apt install -y socat wget
RUN wget https://raw.githubusercontent.com/owlinux1000/pwncat/master/pwncat -O /usr/local/bin/pwncat && chmod +x /usr/local/bin/pwncat
COPY . /root
WORKDIR /root
ENV FLAG=Cyb3rsec{P0pp1ng_sh3llc0de}

CMD ["/usr/local/bin/pwncat", "./ret2shell.o", "-p", "4444"]

