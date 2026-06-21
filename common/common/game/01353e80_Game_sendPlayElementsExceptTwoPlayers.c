// addr: 0x01353e80
// name: Game_sendPlayElementsExceptTwoPlayers
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_sendPlayElementsExceptTwoPlayers(void * this, int
   excludedPlayerIdA_, int excludedPlayerIdB_, void * elements) */

void __thiscall
Game_sendPlayElementsExceptTwoPlayers
          (void *this,int excludedPlayerIdA_,int excludedPlayerIdB_,void *elements)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
                    /* Variant of the player broadcast helper that skips two player ids before
                       sending the payload through the Game vfunc at +0x150, then frees the supplied
                       polymorphic vector. Evidence: two exclusion comparisons around
                       GamePlayer_getPlayerId. */
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 < *(uint *)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  uVar5 = *(uint *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x2c) < uVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (uVar5 == uVar1) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x2c) <= uVar5) {
      FUN_00d83c2d();
    }
    iVar3 = GamePlayer_getPlayerId();
    if ((iVar3 != excludedPlayerIdA_) && (iVar3 != excludedPlayerIdB_)) {
      iVar2 = *(int *)this;
      uVar4 = FUN_012f9f00();
      (**(code **)(iVar2 + 0x150))(iVar3,uVar4);
    }
    if (*(uint *)((int)this + 0x2c) <= uVar5) {
      FUN_00d83c2d();
    }
    uVar5 = uVar5 + 4;
  }
  uVar1 = *(uint *)((int)this + 0x4c);
  if (uVar1 < *(uint *)((int)this + 0x48)) {
    FUN_00d83c2d();
  }
  uVar5 = *(uint *)((int)this + 0x48);
  if (*(uint *)((int)this + 0x4c) < uVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (uVar5 == uVar1) break;
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x4c) <= uVar5) {
      FUN_00d83c2d();
    }
    iVar3 = GamePlayer_getPlayerId();
    if ((iVar3 != excludedPlayerIdA_) && (iVar3 != excludedPlayerIdB_)) {
      iVar2 = *(int *)this;
      uVar4 = FUN_012f9f00();
      (**(code **)(iVar2 + 0x150))(iVar3,uVar4);
    }
    if (*(uint *)((int)this + 0x4c) <= uVar5) {
      FUN_00d83c2d();
    }
    uVar5 = uVar5 + 4;
  }
  if (elements == (void *)0x0) {
    return;
  }
  StdVector_destroyPolymorphicTriples(elements);
                    /* WARNING: Subroutine does not return */
  _free(elements);
}

