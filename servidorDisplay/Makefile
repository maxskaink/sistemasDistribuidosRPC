
# This is a template Makefile generated by rpcgen

# Parameters

CLIENT = 
SERVER = servidor

SOURCES_CLNT.c = 
SOURCES_CLNT.h = 
SOURCES_SVC.c = servidor.c
SOURCES_SVC.h = I_pedidos_display.h
SOURCES.x = I_pedidos_display.x

TARGETS_SVC.c = I_pedidos_display_svc.c   I_pedidos_display_xdr.c 
TARGETS_CLNT.c =
TARGETS = I_pedidos_display.h I_pedidos_display_xdr.c I_pedidos_display_svc.c    

OBJECTS_CLNT = $(SOURCES_CLNT.c:%.c=%.o) $(TARGETS_CLNT.c:%.c=%.o)
OBJECTS_SVC = $(SOURCES_SVC.c:%.c=%.o) $(TARGETS_SVC.c:%.c=%.o)
# Compiler flags 

CFLAGS += -g -I /usr/include/tirpc
LDLIBS += -lnsl -ltirpc
RPCGENFLAGS = 
# Targets 

all : $(CLIENT) $(SERVER)

$(TARGETS) : $(SOURCES.x) 
	rpcgen $(RPCGENFLAGS) $(SOURCES.x)

$(OBJECTS_CLNT) : $(SOURCES_CLNT.c) $(SOURCES_CLNT.h) $(TARGETS_CLNT.c) 

$(OBJECTS_SVC) : $(SOURCES_SVC.c) $(SOURCES_SVC.h) $(TARGETS_SVC.c) 

$(CLIENT) : $(OBJECTS_CLNT) 
	$(LINK.c) -o $(CLIENT) $(OBJECTS_CLNT) $(LDLIBS) 

$(SERVER) : $(OBJECTS_SVC) 
	$(LINK.c) -o $(SERVER) $(OBJECTS_SVC) $(LDLIBS)
