// addr: 0x0147ca70
// name: CancellableStateMachineState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 CancellableStateMachineState_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CancellableStateMachineState, returning null on
                       allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a032b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0xf8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CancellableStateMachineState_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

