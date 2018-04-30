FROM gcc:7.3.0

RUN mkdir /app
WORKDIR /app

ADD . .
RUN make all && make install
