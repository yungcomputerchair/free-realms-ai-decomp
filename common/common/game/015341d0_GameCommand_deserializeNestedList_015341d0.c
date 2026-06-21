// addr: 0x015341d0
// name: GameCommand_deserializeNestedList_015341d0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall GameCommand_deserializeNestedList_015341d0(undefined4 *param_1)

{
  char extraout_AL;
  uint uVar1;
  int iVar2;
  int local_3c;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a counted collection of nested command/list records, using
                       several vector/list construction helpers and finalizing the deserializer
                       section. Exact command subclass is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bba00;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  FUN_013c2690(&local_3c);
  FUN_01533830(local_3c);
  iVar2 = 0;
  if (0 < local_3c) {
    do {
      local_20 = FUN_004eeaa9(uVar1);
      *(undefined1 *)(local_20 + 0x15) = 1;
      *(int *)(local_20 + 4) = local_20;
      *(int *)local_20 = local_20;
      *(int *)(local_20 + 8) = local_20;
      local_1c = 0;
      local_4 = 1;
      local_2c = (undefined4 *)FUN_004eeaa9();
      *(undefined1 *)((int)local_2c + 0x15) = 1;
      local_2c[1] = local_2c;
      *local_2c = local_2c;
      local_2c[2] = local_2c;
      local_28 = 0;
      local_4._0_1_ = 3;
      sub_014017e0((void *)*param_1,local_24);
      if (extraout_AL == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00521a9c();
        local_4 = 0xffffffff;
        uVar1 = FUN_00521a9c();
        ExceptionList = local_c;
        return uVar1 & 0xffffff00;
      }
      FUN_01244860(local_24);
      local_4._0_1_ = 5;
      FUN_005152ac(local_38,local_30,*local_2c,local_30,local_2c);
      FUN_012415a0(local_18);
      local_4._0_1_ = 3;
      FUN_00521a9c();
      FUN_015340f0(local_30);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00521a9c();
      local_4 = 0xffffffff;
      FUN_00521a9c();
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_3c);
  }
  uVar1 = FUN_013c26d0();
  ExceptionList = local_c;
  return uVar1;
}

