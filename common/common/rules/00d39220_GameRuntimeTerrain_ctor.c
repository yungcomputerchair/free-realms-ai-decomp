// addr: 0x00d39220
// name: GameRuntimeTerrain_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
GameRuntimeTerrain_ctor(undefined4 *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a runtime terrain/viewport object, setting its viewport
                       rectangle/grid and constructing the tile array. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01614099;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = GameRuntimeTerrain::TileBubble::vftable;
  param_1[4] = param_2;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  GameRuntimeTerrain_TileArray_ctor(uVar1);
  local_4 = 0;
  FUN_007e1270(&PTR_DAT_017ed790);
  local_4 = CONCAT31(local_4._1_3_,1);
  Viewport_setRectAndUpdateGrid(param_1,param_4);
  FUN_00d38830(param_3);
  uVar1 = param_1[5];
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[6] = ~-(uint)((int)param_3 < (int)uVar1) & uVar1 |
               -(uint)((int)param_3 < (int)uVar1) & param_3;
  param_1[7] = ~-(uint)(2 < (int)uVar1) & uVar1 | -(uint)(2 < (int)uVar1) & 2;
  ExceptionList = local_c;
  return param_1;
}

