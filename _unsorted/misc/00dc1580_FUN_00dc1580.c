// addr: 0x00dc1580
// name: FUN_00dc1580
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_00dc1580(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161b6b8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = Umbra::Commander::vftable;
  param_1[1] = 0;
  if (DAT_01bf3db4 != 0) {
    (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(uVar1);
    uStack_4 = 0;
    puVar3 = (undefined4 *)FUN_00dc4920(0x80);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
      puVar2 = DAT_01bf83e4;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[9] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = param_1;
      puVar3[8] = 1;
      puVar3[10] = 1;
      puVar3[0xe] = 0xffffffff;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0xf] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = DAT_01bf83e4;
      puVar2 = puVar3;
      if (DAT_01bf83e4 != (undefined4 *)0x0) {
        DAT_01bf83e4[0x1a] = puVar3;
      }
    }
    DAT_01bf83e4 = puVar2;
    param_1[1] = puVar3;
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
    ExceptionList = local_c;
    return param_1;
  }
  puVar2 = _malloc(0xc);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00ddda60();
    *puVar2 = Umbra::FallbackCommander::vftable;
    puVar2[2] = param_1;
    puVar3 = puVar2;
  }
  param_1[1] = puVar3;
  ExceptionList = local_c;
  return param_1;
}

