// addr: 0x00da15e1
// name: ___sbh_heap_init
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_heap_init(undefined4 param_1)

{
  DAT_01cbef78 = HeapAlloc(DAT_01bf3c5c,0,0x140);
  if (DAT_01cbef78 == (LPVOID)0x0) {
    return 0;
  }
  DAT_01bf3d2c = 0;
  DAT_01cbef74 = 0;
  DAT_01cbef80 = DAT_01cbef78;
  DAT_01cbef7c = param_1;
  DAT_01cbef84 = 0x10;
  return 1;
}

