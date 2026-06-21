// addr: 0x00a736c0
// name: TintGroupDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TintGroupDataSource_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a TintGroupDataSource ctor routine. Evidence:
                       BaseClient.TintGroups. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ba644;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(param_1,PTR_s_BaseClient_TintGroups_01b505b0);
  local_4 = 0;
  param_1[0x95] = param_2;
  *param_1 = TintGroupDataSource::vftable;
  param_1[0xc] = TintGroupDataSource::vftable;
  param_1[0xd] = TintGroupDataSource::vftable;
  *(undefined1 *)(param_1 + 0x96) = 1;
  FUN_00a72db0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00a73530();
  ExceptionList = local_c;
  return param_1;
}

