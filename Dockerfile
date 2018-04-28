FROM gcc:7.3.0
ADD . .
RUN make all && make install

CMD cccc