// addr: 0x013b2070
// name: MatchCommand_SelectDeck_create
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * MatchCommand_SelectDeck_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a MatchCommand_SelectDeck object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016877db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MatchCommand_SelectDeck_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

