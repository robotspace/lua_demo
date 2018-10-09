# lua_demo
======
demos for lua
------
### 1.<br />
### pcall: Call lua function from C functions. Demonstrate how to get lua function and variable from lua file.
### 2.<br />
### server-client: Server listen local port, accept request and establish connection, select sockets and echo		accepted words to client; Client get input from keyboard and send them to server. String from server must be ended by "\n", otherwise client may occur timeout error.
### 3.<br />
### server_client_multi_thread: This is enhanced client demo with multi_thread. Each client thread calls a lua file to send data to server.
### 4.<br />
### iterator: Demo for iterator, copied from "Programming in Lua".
### 5.<br />
### epoll: Demo for epoll model, no libs is needed, just run it in root model. Client is implemented in lua.
### 6.<br />
### clib: Lib in c for lua.

|字段	|类型	|描述|	必填|	备注|
|:---|:---|:---|:---|:---|
|rows|	int|	每页多少条|	N	|默认20条|
|page|	int|	获取第几页|	Y	||
|category|	int|	哪一类文件|	Y	|如1:火灾性质认定、2:起火方式认定|
