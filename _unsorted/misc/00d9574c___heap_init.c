// addr: 0x00d9574c
// name: __heap_init
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_01bf3c5c = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_01bf3c5c == (HANDLE)0x0) {
    return 0;
  }
  DAT_01cbef94 = ___heap_select();
  if ((DAT_01cbef94 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_01bf3c5c);
    DAT_01bf3c5c = (HANDLE)0x0;
    return 0;
  }
  return 1;
}

