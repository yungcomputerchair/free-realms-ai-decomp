// addr: 0x013d0300
// name: DeckCommand_AddOnlineDeck_create
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * DeckCommand_AddOnlineDeck_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DeckCommand_AddOnlineDeck object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168accb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeckCommand_AddOnlineDeck_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

