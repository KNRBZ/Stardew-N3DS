TARGET := stardew-n3ds
BUILD := build
SOURCES := source
INCLUDES := include

CFLAGS := -O2 -Wall -Wextra -I$(INCLUDES)
LDFLAGS :=

include $(DEVKITPRO)/libctru/default_rules
