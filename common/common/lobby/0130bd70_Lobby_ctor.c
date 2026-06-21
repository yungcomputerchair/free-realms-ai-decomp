// addr: 0x0130bd70
// name: Lobby_ctor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Lobby_ctor(undefined4 * param_1) */

undefined4 * __fastcall Lobby_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence: Lobby::vftable. */
  puStack_8 = &LAB_01676dd7;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  Sortable_ctor(param_1 + 1);
  local_4._0_1_ = 2;
  *param_1 = TradingCard::Lobby::vftable;
  param_1[1] = TradingCard::Lobby::vftable;
  FUN_0130b8b0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0130b920();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  ExceptionList = local_c;
  return param_1;
}

