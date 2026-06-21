// addr: 0x0147c920
// name: CancellableStateMachineState_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CancellableStateMachineState_scalarDtor(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for CancellableStateMachineState; installs vtable,
                       runs StateMachineState cleanup, and frees this when requested. */
  puStack_8 = &LAB_016a0298;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = CancellableStateMachineState::vftable;
  local_4 = 0xffffffff;
  StateMachineState_dtor(uVar1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

