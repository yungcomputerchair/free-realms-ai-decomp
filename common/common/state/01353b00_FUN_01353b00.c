// addr: 0x01353b00
// name: FUN_01353b00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * get_play_element_game_checked(void * container, int iterator_) */

void * __thiscall get_play_element_game_checked(void *this,void *container,int iterator_)

{
  uint uVar1;
  undefined4 in_EAX;
  int *piVar2;
  uint uVar3;
  
                    /* Returns the Game associated with a PlayElement found through a checked
                       container/iterator path; exact owning class is not identifiable. */
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 < *(uint *)((int)this + 0x28)) {
    in_EAX = FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x2c) < uVar3) {
    in_EAX = FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      in_EAX = FUN_00d83c2d();
    }
    if (uVar3 == uVar1) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x2c) <= uVar3) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)PlayElement_getGame();
    in_EAX = (**(code **)(*piVar2 + 0x34))(container);
    if (*(uint *)((int)this + 0x2c) <= uVar3) {
      in_EAX = FUN_00d83c2d();
    }
    uVar3 = uVar3 + 4;
  }
  return (void *)CONCAT31((int3)((uint)in_EAX >> 8),1);
}

