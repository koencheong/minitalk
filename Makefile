CC = gcc
CFLAGS = -Wall -Wextra -Werror
CLIENT = client.c
SERVER = server.c

all: client server

libft1:
	make -C libft
	cp libft/libft.a .

server: libft1
	$(CC) $(CFLAGS) $(SERVER) libft.a -o server

client: libft1
	$(CC) $(CFLAGS) $(CLIENT) libft.a -o client

clean:
	rm -f client.o server.o

fclean: clean
	make fclean -C libft

re: fclean all