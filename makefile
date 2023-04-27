

all:
		voc -s m.Mod
		cc -o test test.c m.o /opt/voc/lib/libvoc-O2.a -I /opt/voc/2/include
