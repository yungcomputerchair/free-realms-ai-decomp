// addr: 0x0136c550
// name: Game_broadcastCallbackResultExceptPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_broadcastCallbackResultExceptPlayer(void * this, int
   excludedPlayerId_, void * callback) */

void __thiscall
Game_broadcastCallbackResultExceptPlayer(void *this,int excludedPlayerId_,void *callback)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
                    /* Iterates two player vectors, skips the excluded player id, obtains a value
                       from callback vfunc +0x44, and sends it to each remaining player. It
                       deletes/releases the callback object at the end. */
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 < *(uint *)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  uVar4 = *(uint *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x2c) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar1) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x2c) <= uVar4) {
      FUN_00d83c2d();
    }
    iVar2 = GamePlayer_getPlayerId();
    if (iVar2 != excludedPlayerId_) {
      pvVar3 = (void *)(**(code **)(*(int *)callback + 0x44))();
      Game_dispatchCommandToPlayer(this,iVar2,pvVar3);
    }
    if (*(uint *)((int)this + 0x2c) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 4;
  }
  uVar1 = *(uint *)((int)this + 0x4c);
  if (uVar1 < *(uint *)((int)this + 0x48)) {
    FUN_00d83c2d();
  }
  uVar4 = *(uint *)((int)this + 0x48);
  if (*(uint *)((int)this + 0x4c) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar1) break;
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x4c) <= uVar4) {
      FUN_00d83c2d();
    }
    iVar2 = GamePlayer_getPlayerId();
    if (iVar2 != excludedPlayerId_) {
      pvVar3 = (void *)(**(code **)(*(int *)callback + 0x44))();
      Game_dispatchCommandToPlayer(this,iVar2,pvVar3);
    }
    if (*(uint *)((int)this + 0x4c) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 4;
  }
  if (callback != (void *)0x0) {
    (*(code *)**(undefined4 **)callback)(1);
  }
  return;
}

