// addr: 0x014da9d0
// name: GameCommand_ReplaceCard_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GameCommand_ReplaceCard_create(void) */

void * GameCommand_ReplaceCard_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and default-constructs a GameCommand_ReplaceCard command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016adf1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameCommand_ReplaceCard_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

