CXXFLAGS := -I../include -I.

SRC := $(wildcard *.cc)
OBJ := $(patsubst %.cc,%.o,$(SRC))
DEP := $(patsubst %.cc,%.d,$(SRC))

all: $(LIBNAME)

clean:
	$(RM) $(DEP) $(OBJ) $(LIBNAME)

%.d: %.cc
	$(CXX) -MM $(CXXFLAGS) $< | sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@

ifneq ($(filter clean,$(MAKECMDGOALS)),clean)
-include $(DEP)
endif

$(LIBNAME): $(OBJ)
	$(AR) rc $@ $(OBJ)