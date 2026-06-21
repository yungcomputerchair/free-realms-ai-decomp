// addr: 0x0141ab30
// name: GameCommand_StateSpecificMessage_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * GameCommand_StateSpecificMessage_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a StateSpecificMessage game command. Constructor
                       callee identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169388b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x38);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GameCommand_StateSpecificMessage_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

