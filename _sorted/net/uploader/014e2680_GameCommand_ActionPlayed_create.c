// addr: 0x014e2680
// name: GameCommand_ActionPlayed_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * GameCommand_ActionPlayed_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a GameCommand_ActionPlayed object and calls its constructor; plain
                       factory wrapper without registration callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af85b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x5c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameCommand_ActionPlayed_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

