${OBJ_DIR}/%.o:%.c 
	$(CC) ${CFLAGS} -MMD -MF ${OBJ_DIR}/$*.d -c $< -o $@

${BIN_DIR}/lib%.a:%.c 
	$(AR) r $@ ${OBJ_DIR}/$*.o

${BIN_DIR}/lib%.so:%.c 
	$(CC) $< -fPIC -shared -o $@

CURRENT_SRC=$(wildcard *.c)
SRC=$(patsubst %.c,${OBJ_DIR}/%.o,$(notdir ${CURRENT_SRC}))
STATIC_LIB = $(patsubst %.c,${BIN_DIR}/lib%.a,$(notdir ${CURRENT_SRC}))
SHARE_LIB = $(patsubst %.c,${BIN_DIR}/lib%.so,$(notdir ${CURRENT_SRC}))
all: $(SRC) $(STATIC_LIB) $(SHARE_LIB)

-include $(DEPS)

debug:
	@echo include:${INC_DIR}
	
