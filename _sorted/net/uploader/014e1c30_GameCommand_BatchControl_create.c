// addr: 0x014e1c30
// name: GameCommand_BatchControl_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * GameCommand_BatchControl_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a GameCommand_BatchControl object and calls its constructor; plain
                       factory wrapper without registration callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af70b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x28);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameCommand_BatchControl_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

