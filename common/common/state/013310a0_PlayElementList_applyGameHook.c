// addr: 0x013310a0
// name: PlayElementList_applyGameHook
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayElementList_applyGameHook(void * this, void * arg) */

bool __thiscall PlayElementList_applyGameHook(void *this,void *arg)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
                    /* Iterates elements in vector +0x28..+0x2c, gets each element game, and calls
                       its virtual slot 0x34 with the argument. */
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 < *(uint *)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x2c) < uVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (uVar3 == uVar1) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x2c) <= uVar3) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)PlayElement_getGame();
    (**(code **)(*piVar2 + 0x34))(arg);
    if (*(uint *)((int)this + 0x2c) <= uVar3) {
      FUN_00d83c2d();
    }
    uVar3 = uVar3 + 4;
  }
  return true;
}

