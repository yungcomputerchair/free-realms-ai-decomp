// addr: 0x013694e0
// name: Game_deserializeNestedRecordList
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall Game_deserializeNestedRecordList(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int local_e4;
  undefined4 *local_e0;
  undefined1 *local_dc;
  undefined4 *local_d8;
  undefined1 *local_d4;
  undefined1 *local_d0;
  undefined1 local_cc [12];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [4];
  undefined1 local_b4 [8];
  undefined1 local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [52];
  undefined4 local_4c [15];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes another counted game record collection, reading records and
                       inserting them via tree/list helpers before finalizing the deserializer
                       section. The exact field semantics are not visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168017b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_e4;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff0c;
  ExceptionList = &local_c;
  local_e0 = param_1;
  FUN_013c2690(&local_e4);
  iVar4 = 0;
  if (0 < local_e4) {
    local_d8 = &local_bc;
    local_d4 = local_b8;
    local_dc = local_b4;
    do {
      local_c0 = 0;
      local_bc = 0;
      local_b8[0] = 0;
      local_b4[0] = 0;
      local_98 = 0xf;
      local_9c = 0;
      local_ac = 0;
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      local_4 = 6;
      cVar2 = FUN_01401b20(*param_1,&local_c0,uVar3);
      uVar1 = local_c0;
      if (cVar2 == '\0') {
        local_4 = 0xffffffff;
        uVar3 = FUN_01331b60();
        ExceptionList = local_c;
        return uVar3 & 0xffffff00;
      }
      local_84 = local_bc;
      local_d0 = local_80;
      local_80[0] = local_b8[0];
      FUN_01332440(local_b4);
      local_4._0_1_ = 10;
      FUN_005f15f0(local_94);
      local_4._0_1_ = 0xc;
      local_4c[0] = uVar1;
      FUN_01335270(&local_84);
      local_4._0_1_ = 0xe;
      FUN_0133dfa0(local_cc,local_4c);
      local_4._0_1_ = 0xc;
      FUN_01331b60();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_01331b60();
      local_4 = 0xffffffff;
      FUN_01331b60();
      iVar4 = iVar4 + 1;
      param_1 = local_e0;
    } while (iVar4 < local_e4);
  }
  uVar3 = FUN_013c26d0();
  ExceptionList = local_c;
  return uVar3;
}

