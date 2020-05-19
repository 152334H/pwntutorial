# pwn tutorial

Over the course of a few months, I've made a number of basic pwn challenges for other people to play around with.

This repo has most of them.

# How do I run this myself?

0. cd into the challenge you want to setup
1. Every directory has a `compile.sh`. Run that first.
2. `docker-compose build`, `docker-compose up -d`.
3. Connect to `localhost:<port_inside_docker-compose.yml>` and enjoy!

# Where should I start?

The challenges were made in the order,

* litmus
* ret2text
* ret2shell
* ret2ret
* refresher
* ret2libc
* fstack_protector

You may want to do them in that order, or in a slightly different one, but in general you may need knowledge from all previous boxes to move on.
