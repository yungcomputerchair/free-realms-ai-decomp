// addr: 0x013cfcf0
// name: DeckCommand_DeleteOnlineDeck_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * DeckCommand_DeleteOnlineDeck_create(void) */

void * DeckCommand_DeleteOnlineDeck_create(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DeckCommand_DeleteOnlineDeck. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168abdb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x20);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)DeckCommand_DeleteOnlineDeck_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

