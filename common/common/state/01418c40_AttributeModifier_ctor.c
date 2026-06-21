// addr: 0x01418c40
// name: AttributeModifier_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AttributeModifier_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AttributeModifier by installing AttributeModifier vtables,
                       initializing embedded containers and an EvaluationEnvironment, and setting
                       default flags/fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016934ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayElement_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = AttributeModifier::vftable;
  param_1[2] = AttributeModifier::vftable;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_ctor();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)((int)param_1 + 0x69) = 1;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  ExceptionList = local_c;
  return param_1;
}

