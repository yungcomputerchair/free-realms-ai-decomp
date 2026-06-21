// addr: 0x01516910
// name: Game_showDeckAvailabilityMessages_alt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Game_showDeckAvailabilityMessages_alt(void) */

void Game_showDeckAvailabilityMessages_alt(void)

{
  uint uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint first_;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Duplicate-shaped routine that checks current player's deck count and sends
                       message id 0x3729 or 0x28bc followed by 0x28bd. Evidence: Game_getMyPlayerID,
                       deck lookup, and message dispatch calls matching 0144d8d0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b76c8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  StateMachineState_getGame(uVar1);
  this = (void *)StateMachineState_getGame();
  iVar2 = Game_getMyPlayerID(this);
  iVar2 = FUN_01335d50(local_1c,iVar2);
  if (*(int *)(iVar2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
  }
  local_4 = 0xffffffff;
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  iVar3 = StateMachineState_getGame(uVar1);
  if (iVar2 == 0) {
    uVar1 = *(uint *)(iVar3 + 0x20);
    first_ = 0x3729;
  }
  else {
    uVar1 = *(uint *)(iVar3 + 0x20);
    first_ = 0x28bc;
  }
  set_pair_fields_4_8((void *)(in_ECX + 0x54),first_,uVar1);
  iVar2 = StateMachineState_getGame();
  set_pair_fields_4_8((void *)(in_ECX + 0x70),0x28bd,*(uint *)(iVar2 + 0x20));
  ExceptionList = local_c;
  return;
}

