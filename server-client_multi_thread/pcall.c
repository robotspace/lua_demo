#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
      
void thread_1(void* args)
{  
    lua_State *L;  
    if(NULL == (L = luaL_newstate()))  
    {  
        perror("luaL_newstate failed");  
        return ;  
    }
    
    luaL_openlibs(L);
    
    if(luaL_loadfile(L, "./mclient1.lua"))  
    {  
        perror("loadfile failed");  
        return ;  
    }
    
     lua_pcall(L, 0, 0, 0);//Lua handles a chunk as the body of an anonymous function with a variable number of arguments. Call it.  
//    lua_getglobal(L,"x");
    //  int x = (int) lua_tonumber(L,-1);
//    printf("x:%d\n\r",x);
    
     lua_getglobal(L, "upload");  
     lua_pcall(L, 0, 0, 0);
    
    
      lua_close(L);  
      

}

      
void thread_2(void* args)
{  
    lua_State *L;  
    if(NULL == (L = luaL_newstate()))  
    {  
        perror("luaL_newstate failed");  
        return ;  
    }
    
    luaL_openlibs(L);
    
    if(luaL_loadfile(L, "./mclient2.lua"))  
    {  
        perror("loadfile failed");  
        return;  
    }
    
     lua_pcall(L, 0, 0, 0);//Lua handles a chunk as the body of an anonymous function with a variable number of arguments. Call it.  
//    lua_getglobal(L,"x");
    //  int x = (int) lua_tonumber(L,-1);
//    printf("x:%d\n\r",x);
    
     lua_getglobal(L, "upload");  
     lua_pcall(L, 0, 0, 0);
    
    
      lua_close(L);  
      

}

int main(int argc, const char *argv[])
{
	pthread_t pid1, pid2;
	if(pthread_create(&pid1, NULL, thread_1, NULL))
	{
		return -1;
	}
	
	if(pthread_create(&pid2, NULL, thread_2, NULL))
	{
		return -1;
	}

	while(1){
		sleep(1000);//long sleep
	}
	return 0;
}

