# lua_demo
demos for lua
1. pcall: Call lua function from C functions. Demonstrate how to get lua function and variable from lua file.
2. server-client: Server listen local port, accept request and establish connection, select sockets and echo
                  accepted words to client; Client get input from keyboard and send them to server. String from
		  server must be ended by "\n", otherwise client may occur timeout error.
3. server_client_multi_thread: This is enhanced client demo with multi_thread. Each client thread calls a lua file to send data to server.
4. iterator: Demo for iterator, copied from "Programming in Lua".
5. 