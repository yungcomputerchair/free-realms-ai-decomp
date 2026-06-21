// addr: 0x0101c190
// name: TargetCharacterBone_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TargetCharacterBone_ctor(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* constructs TargetCharacterGuid base, installs TargetCharacterBone vtable,
                       initializes an IString field, and optionally copies bone data from a source
                       target. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01634c53;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  TargetCharacterGuid_ctor(param_1,param_2);
  *param_1 = TargetCharacterBone::vftable;
  param_1[0xc] = SoeUtil::IString<char>::vftable;
  param_1[0xd] = &DAT_01cb6140;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  local_4 = 1;
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x10))(uVar1);
    if (iVar2 != 0) {
      FUN_006f9e60(iVar2 + 0x30);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

