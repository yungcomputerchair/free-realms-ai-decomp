// addr: 0x014e11c0
// name: GameCommand_ButtonPressed_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GameCommand_ButtonPressed_create(void) */

void * GameCommand_ButtonPressed_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and default-constructs a GameCommand_ButtonPressed command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af49b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameCommand_ButtonPressed_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

