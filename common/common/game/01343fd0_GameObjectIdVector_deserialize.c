// addr: 0x01343fd0
// name: GameObjectIdVector_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall GameObjectIdVector_deserialize(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint extraout_EAX;
  int iVar4;
  int local_58;
  undefined4 *local_54;
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a counted sequence from the current stream into a temporary
                       vector-like container, aborting and cleaning up if an element read fails.
                       Called by PlayElement_deserialize, Card_deserialize, and
                       GameTurn_deserialize. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ca78;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  local_54 = param_1;
  FUN_013c2690(&local_58);
  iVar4 = 0;
  if (0 < local_58) {
    do {
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_4 = 1;
      cVar2 = FUN_014019a0(*param_1,&local_34,uVar3);
      uVar1 = local_34;
      if (cVar2 == '\0') {
        local_4 = 0xffffffff;
        StdStringBuffer_release(&local_34);
        ExceptionList = local_c;
        return extraout_EAX & 0xffffff00;
      }
      FUN_005f15f0(local_30);
      local_4._0_1_ = 2;
      local_20[0] = uVar1;
      FUN_005f15f0(local_44);
      local_4._0_1_ = 4;
      FUN_01247720(local_50,local_20);
      local_4._0_1_ = 2;
      StdVector_clearAndFreeStorage_off8(local_20);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      local_40 = (void *)0x0;
      local_3c = 0;
      local_38 = 0;
      local_4 = 0xffffffff;
      StdStringBuffer_release(&local_34);
      iVar4 = iVar4 + 1;
      param_1 = local_54;
    } while (iVar4 < local_58);
  }
  uVar3 = FUN_013c26d0();
  ExceptionList = local_c;
  return uVar3;
}

