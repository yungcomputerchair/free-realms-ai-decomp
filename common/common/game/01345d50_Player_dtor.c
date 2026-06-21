// addr: 0x01345d50
// name: Player_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Player_dtor(void * this) */

void __fastcall Player_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys a Player object: assigns Player::vftable, releases owned
                       components/persistent references, frees a string member, then chains to
                       PersistentComponent/PersistentBase vtables. The vtable symbol gives the class
                       name. */
  puStack_8 = &LAB_0167cdfb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = Player::vftable;
  local_4 = 1;
  if (*(void **)((int)this + 4) != (void *)0x0) {
    PlayElement_detachFromParent(*(void **)((int)this + 4));
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 4))(1);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(undefined4 **)((int)this + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x28))(1,uVar1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (0xf < *(uint *)((int)this + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

