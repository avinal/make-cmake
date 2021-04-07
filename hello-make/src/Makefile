CXXFLAGS = -I../include -I.

SRC := $(wildcard *.cc)
DEP := $(patsubst %.cc,%.d,$(SRC))
OBJ := $(patsubst %.cc,%.o,$(SRC))

all: $(PROGNAME)

$(PROGNAME): $(OBJ) ../lib/$(LIBNAME)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.d: %.cc
	$(CXX) -MM $(CXXFLAGS) $< | sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@

ifneq ($(filter clean,$(MAKECMDGOALS)),clean)
-include $(DEP)
endif

clean:
	$(RM) $(DEP) $(OBJ) $(PROGNAME)