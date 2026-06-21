// addr: 0x01429300
// name: GameData_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameData_ctor(void * this) */

void * __fastcall GameData_ctor(void *this)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameData and initializes result/stat fields referenced by strings
                       like GameResult and NumberOfCardsPlayed. Evidence is GameData::vftable
                       assignment and GameData-related strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695541;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = GameData::vftable;
  local_10 = this;
  FUN_01429290(uVar1);
  local_4 = 0;
  FUN_01428140();
  local_4._0_1_ = 1;
  FUN_014281b0();
  local_4 = CONCAT31(local_4._1_3_,2);
  local_14 = 1;
  puVar2 = (undefined4 *)FUN_01427e80(&local_14);
  *puVar2 = 0;
  local_14 = 0;
  puVar2 = (undefined4 *)FUN_01427e80(&local_14);
  *puVar2 = 0;
  local_14 = 2;
  puVar2 = (undefined4 *)FUN_01427e80(&local_14);
  *puVar2 = 1;
  local_14 = 3;
  puVar2 = (undefined4 *)FUN_01427e80(&local_14);
  *puVar2 = 1;
  local_14 = 1;
  puVar2 = (undefined4 *)FUN_01427f40(&local_14);
  *puVar2 = "NumberOfTurns";
  local_14 = 0;
  puVar2 = (undefined4 *)FUN_01427f40(&local_14);
  *puVar2 = "GameResult";
  local_14 = 2;
  puVar2 = (undefined4 *)FUN_01427f40(&local_14);
  *puVar2 = "NumberOfCardsPlayed";
  local_14 = 3;
  puVar2 = (undefined4 *)FUN_01427f40(&local_14);
  *puVar2 = "NumberOfCardsDestroyed";
  ExceptionList = local_c;
  return this;
}

