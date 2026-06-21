// addr: 0x012693e0
// name: Game_selectMyPlayerIfNeeded
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool Game_selectMyPlayerIfNeeded(void) */

bool Game_selectMyPlayerIfNeeded(void)

{
  bool bVar1;
  int iVar2;
  int *this;
  int iVar3;
  undefined4 uVar4;
  
                    /* If a game/player context exists and a condition is false, invokes a virtual
                       method with Game_getMyPlayerID(0). Exact class is unclear. */
  FUN_012e0ba0();
  iVar2 = FUN_0124d010();
  if (iVar2 == 0) {
    return true;
  }
  this = (int *)FUN_0131b3c0();
  if (this != (int *)0x0) {
    bVar1 = unknown_getGameGuardFlag(this);
    if (!bVar1) {
      iVar2 = *this;
      uVar4 = 0;
      iVar3 = Game_getMyPlayerID(this);
      (**(code **)(iVar2 + 0x1e4))(iVar3,uVar4);
      return true;
    }
  }
  return true;
}

