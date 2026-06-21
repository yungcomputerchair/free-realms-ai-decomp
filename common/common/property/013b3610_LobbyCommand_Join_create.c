// addr: 0x013b3610
// name: LobbyCommand_Join_create
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * LobbyCommand_Join_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a LobbyCommand_Join object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x7c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_Join_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

