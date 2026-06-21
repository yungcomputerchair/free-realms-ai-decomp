// addr: 0x00ddda60
// name: FUN_00ddda60
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_00ddda60(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161ce18;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = DPVS::Commander::vftable;
  param_1[1] = 0;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(uVar2);
  uStack_4 = 0;
  puVar3 = (undefined4 *)FUN_00debb30(0x70);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    puVar1 = DAT_01bfd724;
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
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0xe] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = DAT_01bfd724;
    puVar1 = puVar3;
    if (DAT_01bfd724 != (undefined4 *)0x0) {
      DAT_01bfd724[0x19] = puVar3;
    }
  }
  DAT_01bfd724 = puVar1;
  param_1[1] = puVar3;
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_c;
  return param_1;
}

