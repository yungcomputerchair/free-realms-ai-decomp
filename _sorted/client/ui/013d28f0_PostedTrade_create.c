// addr: 0x013d28f0
// name: PostedTrade_create
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * PostedTrade_create(void) */

void * PostedTrade_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x108 bytes and constructs a PostedTrade, returning null on
                       allocation failure. Class identified by called constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b2db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x108);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PostedTrade_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

