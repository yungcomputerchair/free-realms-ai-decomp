// addr: 0x01350660
// name: PlayArea_findPlayerElementById
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayArea_findPlayerElementById(void * this, int playerId_) */

void * __thiscall PlayArea_findPlayerElementById(void *this,int playerId_)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
                    /* Searches two element vectors for an entry whose GamePlayer_getPlayerId
                       matches the supplied id and returns the matching element or null. */
  puVar1 = *(undefined4 **)((int)this + 0x2c);
  if (puVar1 < *(undefined4 **)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)((int)this + 0x28);
  if (*(undefined4 **)((int)this + 0x2c) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) {
      puVar1 = *(undefined4 **)((int)this + 0x4c);
      if (puVar1 < *(undefined4 **)((int)this + 0x48)) {
        FUN_00d83c2d();
      }
      puVar4 = *(undefined4 **)((int)this + 0x48);
      if (*(undefined4 **)((int)this + 0x4c) < puVar4) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (this == (void *)0xffffffbc) {
          FUN_00d83c2d();
        }
        if (puVar4 == puVar1) {
          return (void *)0x0;
        }
        if (this == (void *)0xffffffbc) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)((int)this + 0x4c) <= puVar4) {
          FUN_00d83c2d();
        }
        pvVar2 = (void *)*puVar4;
        iVar3 = GamePlayer_getPlayerId();
        if (iVar3 == playerId_) break;
        if (*(undefined4 **)((int)this + 0x4c) <= puVar4) {
          FUN_00d83c2d();
        }
        puVar4 = puVar4 + 1;
      }
      return pvVar2;
    }
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x2c) <= puVar4) {
      FUN_00d83c2d();
    }
    pvVar2 = (void *)*puVar4;
    iVar3 = GamePlayer_getPlayerId();
    if (iVar3 == playerId_) break;
    if (*(undefined4 **)((int)this + 0x2c) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  return pvVar2;
}

