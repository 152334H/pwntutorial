FROM ubuntu:20.04

RUN apt update -y \
    && apt upgrade -y \
    && apt install -y socat wget
RUN wget https://raw.githubusercontent.com/owlinux1000/pwncat/master/pwncat -O /usr/local/bin/pwncat && chmod +x /usr/local/bin/pwncat
COPY . /root
WORKDIR /root

CMD ["/usr/local/bin/pwncat", "./ret2ret.o", "-p", "4444"]

