// addr: 0x013fbaa0
// name: StateMachine_setCurrentStateAndCheckActions
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall StateMachine_setCurrentStateAndCheckActions(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Stores a new current state value, queries available actions either from the
                       state machine or its game object, and returns whether any actions were found.
                        */
  puStack_8 = &LAB_0168fcd8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    iVar2 = StateMachine_sub_013f0010(*(void **)(param_1 + 0x18));
    if ((char)iVar2 != '\0') {
      StateMachine_sub_013f0050(*(void **)(param_1 + 0x18));
      goto LAB_013fbb11;
    }
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x178))(local_1c,uVar1);
LAB_013fbb11:
  if ((local_18 == (void *)0x0) || (local_14 - (int)local_18 >> 2 == 0)) {
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    uVar3 = 0;
  }
  else {
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}

