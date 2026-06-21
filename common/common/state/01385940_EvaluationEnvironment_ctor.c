// addr: 0x01385940
// name: EvaluationEnvironment_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall EvaluationEnvironment_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an EvaluationEnvironment: installs PersistentBase,
                       PersistentComponent, then EvaluationEnvironment vtables and initializes all
                       environment fields and flags. */
  puStack_8 = &LAB_016830ca;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  *param_1 = EvaluationEnvironment::vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_4 = 5;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_012fa910(uVar1);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  ExceptionList = local_c;
  return param_1;
}

