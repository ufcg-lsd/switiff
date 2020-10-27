CFLAGS ?= -g -O2
XCFLAGS =
override CFLAGS += -Wall -D_GNU_SOURCE -L../src/ -I../src/include/

include ../Makefile.quiet

ifneq ($(MAKECMDGOALS),clean)
include ../config-host.mak
endif

all_targets += switiff

all: $(all_targets)

test_srcs := switiff.cpp

test_objs := $(patsubst %.cpp,%.ol,$(test_srcs))

%: %.cpp
	$(QUIET_CC)$(CC) $(CFLAGS) -o $@ $< -luring $(XCFLAGS)

clean:
	@rm -f $(all_targets) $(test_objs)
