// addr: 0x013563c0
// name: Game_checkRepeatedPlayerActionLimit
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_checkRepeatedPlayerActionLimit(void * this, int playerId_, int
   actionId_, void * target) */

bool __thiscall
Game_checkRepeatedPlayerActionLimit(void *this,int playerId_,int actionId_,void *target)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 local_8 [8];
  
                    /* Checks repeated-action counters and rejects when another player has also
                       repeated the same action too many times. */
  piVar3 = (int *)FUN_01354b10(local_8,&playerId_);
  iVar4 = *piVar3;
  iVar1 = *(int *)((int)this + 0x2cc);
  iVar2 = piVar3[1];
  if ((iVar4 == 0) || (iVar4 != (int)this + 0x2c8)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar1) {
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(iVar2 + 0x10) == actionId_) {
      if (iVar2 == *(int *)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
      if (*(void **)(iVar2 + 0x14) == target) {
        if (iVar2 == *(int *)(iVar4 + 4)) {
          FUN_00d83c2d();
        }
        if (5 < *(int *)(iVar2 + 0x18)) {
          piVar3 = *(int **)((int)this + 0x2c);
          target = piVar3;
          if (piVar3 < *(int **)((int)this + 0x28)) {
            FUN_00d83c2d();
          }
          piVar6 = *(int **)((int)this + 0x28);
          if (*(int **)((int)this + 0x2c) < piVar6) {
            FUN_00d83c2d();
          }
          while( true ) {
            if (this == (void *)0xffffffdc) {
              FUN_00d83c2d();
            }
            if (piVar6 == piVar3) break;
            if (this == (void *)0xffffffdc) {
              FUN_00d83c2d();
            }
            if (*(int **)((int)this + 0x2c) <= piVar6) {
              FUN_00d83c2d();
            }
            if ((*piVar6 != 0) && (iVar4 = GamePlayer_getPlayerId(), iVar4 != playerId_)) {
              actionId_ = GamePlayer_getPlayerId();
              piVar3 = (int *)FUN_01354b10(local_8,&actionId_);
              iVar4 = *piVar3;
              iVar1 = piVar3[1];
              iVar2 = *(int *)((int)this + 0x2cc);
              if ((iVar4 == 0) || (iVar4 != (int)this + 0x2c8)) {
                FUN_00d83c2d();
              }
              if (iVar1 != iVar2) {
                if (iVar4 == 0) {
                  FUN_00d83c2d();
                }
                if (iVar1 == *(int *)(iVar4 + 4)) {
                  FUN_00d83c2d();
                }
                if (5 < *(int *)(iVar1 + 0x18)) {
                  if (iVar1 == *(int *)(iVar4 + 4)) {
                    FUN_00d83c2d();
                  }
                  uVar5 = GamePlayer_getPlayerId(*(undefined4 *)(iVar1 + 0x18));
                  Game_logGeneral(this,
                                  "Another player has also done the same action more than 3 times. %d, %d"
                                  ,uVar5);
                  return false;
                }
              }
            }
            if (*(int **)((int)this + 0x2c) <= piVar6) {
              FUN_00d83c2d();
            }
            piVar6 = piVar6 + 1;
            piVar3 = target;
          }
        }
      }
    }
  }
  return true;
}

