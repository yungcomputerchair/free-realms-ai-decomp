// addr: 0x0141a890
// name: GameCommand_StateSpecificMessage_createForState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GameCommand_StateSpecificMessage_createForState(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a GameCommand_StateSpecificMessage using the caller's state
                       machine/context, then passes it to a virtual enqueue/send method. Returns the
                       new command pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169385b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x38);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_0141a550(param_1[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(uVar3,uVar1);
  ExceptionList = pvVar2;
  return uVar3;
}

