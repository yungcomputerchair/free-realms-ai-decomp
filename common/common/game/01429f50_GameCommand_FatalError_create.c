// addr: 0x01429f50
// name: GameCommand_FatalError_create
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * GameCommand_FatalError_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x94 bytes and constructs a GameCommand_FatalError object,
                       returning null if allocation fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169577b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x94);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameCommand_FatalError_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

