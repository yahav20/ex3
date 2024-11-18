FROM gcc:latest

WORKDIR /app
COPY . /app
RUN g++ -o myapp main.cpp

CMD ["./myapp"]

