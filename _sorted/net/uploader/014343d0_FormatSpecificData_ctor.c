// addr: 0x014343d0
// name: FormatSpecificData_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FormatSpecificData_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs FormatSpecificData via PersistentComponent/HasProperties
                       initialization. */
  puStack_8 = &LAB_01696be7;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  HasProperties_ctor(uVar1);
  local_4._0_1_ = 2;
  *param_1 = FormatSpecificData::vftable;
  param_1[1] = FormatSpecificData::vftable;
  FUN_01325cc0();
  local_4._0_1_ = 3;
  FUN_01434240();
  local_4._0_1_ = 4;
  FUN_005258fb();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_005258fb();
  param_1[3] = 0xffffffff;
  param_1[0x10] = 0;
  ExceptionList = local_c;
  return param_1;
}

