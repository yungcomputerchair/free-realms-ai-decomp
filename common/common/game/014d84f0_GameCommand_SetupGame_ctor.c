// addr: 0x014d84f0
// name: GameCommand_SetupGame_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_SetupGame_ctor(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_SetupGame, installs its vtable, zeros
                       fields/vectors, and copies setup data from the current Game such as game
                       number/type and playable action collection. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad7f9;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  *param_1 = GameCommand_SetupGame::vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  FUN_01247380(uVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0141b3d0(param_2);
  param_1[9] = 0;
  param_1[10] = 0;
  iVar2 = FUN_01347c20(param_2);
  param_1[0xb] = iVar2;
  pvVar3 = FUN_01347c50(param_2);
  FUN_005f1e5c(pvVar3);
  uVar4 = FUN_01347c60();
  FUN_005f1e5c(uVar4);
  uVar4 = FUN_01347aa0();
  param_1[0x14] = uVar4;
  uVar4 = FUN_01347e00();
  param_1[0x15] = uVar4;
  iVar2 = FUN_01347b60(param_2);
  param_1[0x16] = iVar2;
  uVar4 = FUN_013479c0();
  param_1[0x17] = uVar4;
  uVar4 = FUN_013488b0();
  param_1[0x18] = uVar4;
  uVar4 = FUN_01348d00();
  param_1[0x19] = uVar4;
  iVar2 = Game_getGameNumber(param_2);
  param_1[0x1a] = iVar2;
  pvVar3 = Game_getPlayableActionCollection(param_2);
  param_1[0x1e] = pvVar3;
  iVar2 = Game_getGameType(param_2);
  param_1[0x1f] = iVar2;
  ExceptionList = local_c;
  return param_1;
}

