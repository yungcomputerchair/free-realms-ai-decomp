// addr: 0x01343d20
// name: PlayElement_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall PlayElement_ctor(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the PlayElement base portion by constructing HasProperties and
                       initializing PlayElement fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167c9d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  HasProperties_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  puVar1 = param_1 + 2;
  *puVar1 = PersistentBase::vftable;
  *puVar1 = PersistentComponent::vftable;
  local_4 = 2;
  *param_1 = PlayElement::vftable;
  *puVar1 = PlayElement::vftable;
  FUN_01343a50();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  ExceptionList = local_c;
  return param_1;
}

