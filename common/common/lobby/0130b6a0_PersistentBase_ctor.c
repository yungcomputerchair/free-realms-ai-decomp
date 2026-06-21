// addr: 0x0130b6a0
// name: PersistentBase_ctor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PersistentBase_ctor(undefined4 * param_1) */

void __fastcall PersistentBase_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *this;
  int iVar2;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs/initializes the object. Evidence: PersistentBase::vftable. */
  puStack_8 = &LAB_01676cb3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = TradingCard::Lobby::vftable;
  param_1[1] = TradingCard::Lobby::vftable;
  local_4 = 5;
  DisplayActionManager_ensureSingleton();
  if (this != (void *)0x0) {
    ClientApplication_clearLobbyIfCurrent(this,param_1);
  }
  FUN_01308580(uVar1);
  iVar2 = param_1[5];
  if (iVar2 != 0) {
    FUN_012cfde0(iVar2);
    iVar2 = FUN_012cc6b0(iVar2);
    if (iVar2 != 0) {
      iVar2 = param_1[5];
      if (iVar2 != 0) {
        FUN_012cfde0(iVar2);
        FUN_012cc6b0(iVar2);
      }
      FUN_01306030(param_1);
    }
  }
  this_00 = (void *)FUN_012cfde0();
  LobbyService_unregisterLobby(this_00,param_1);
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
    param_1[0xc] = 0;
  }
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
    param_1[0xd] = 0;
  }
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
    param_1[0xe] = 0;
  }
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
    param_1[0xf] = 0;
  }
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15])(1);
    param_1[0x15] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if ((void *)param_1[0x17] == (void *)0x0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((void *)param_1[0x12] == (void *)0x0) {
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      local_4._0_1_ = 2;
      FUN_0130b630();
      local_4._0_1_ = 1;
      FUN_0130b5c0();
      local_4 = (uint)local_4._1_3_ << 8;
      Sortable_dtor(param_1 + 1);
      *param_1 = PersistentComponent::vftable;
      *param_1 = PersistentBase::vftable;
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x17]);
}

