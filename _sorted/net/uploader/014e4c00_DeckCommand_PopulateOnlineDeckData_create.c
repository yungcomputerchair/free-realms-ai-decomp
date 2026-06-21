// addr: 0x014e4c00
// name: DeckCommand_PopulateOnlineDeckData_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * DeckCommand_PopulateOnlineDeckData_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a DeckCommand_PopulateOnlineDeckData object and calls its
                       constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afb7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeckCommand_PopulateOnlineDeckData_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

