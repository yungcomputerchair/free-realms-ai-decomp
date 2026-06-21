// addr: 0x0105cac0
// name: FUN_0105cac0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0105cac0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Initializes a large unknown client/housing state record with default
                       vectors/quaternions, several SoeUtil::IString fields, and other zero/default
                       fields. No class symbol, file string, or RTTI identifies it. */
  puStack_18 = &LAB_0163cce2;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = DAT_01cb70a8;
  param_1[9] = DAT_01cb70ac;
  param_1[10] = DAT_01cb70c8;
  param_1[0xb] = DAT_01cb70cc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar3 = uRam01cb54fc;
  uVar2 = uRam01cb54f8;
  uVar1 = uRam01cb54f4;
  param_1[0x10] = _DAT_01cb54f0;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  uVar3 = uRam01cb53dc;
  uVar2 = uRam01cb53d8;
  uVar1 = uRam01cb53d4;
  param_1[0x14] = _DAT_01cb53d0;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  param_1[0x18] = SoeUtil::IString<char>::vftable;
  param_1[0x19] = &DAT_01cb70a0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  local_14 = 0;
  param_1[0x1c] = _DAT_0175b420;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_008cf4c0();
  uVar3 = uRam01cb54cc;
  uVar2 = uRam01cb54c8;
  uVar1 = uRam01cb54c4;
  param_1[0x30] = _DAT_01cb54c0;
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  param_1[0x34] = 0;
  param_1[0x36] = DAT_01cb70b8;
  param_1[0x37] = DAT_01cb70bc;
  param_1[0x38] = SoeUtil::IString<char>::vftable;
  param_1[0x39] = &DAT_01cb70a0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = SoeUtil::IString<char>::vftable;
  param_1[0x3e] = &DAT_01cb70a0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  ExceptionList = local_1c;
  return param_1;
}

