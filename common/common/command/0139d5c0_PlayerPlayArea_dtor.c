// addr: 0x0139d5c0
// name: PlayerPlayArea_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayerPlayArea_dtor(void * this) */

void __fastcall PlayerPlayArea_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys PlayerPlayArea, releasing three owned play-area members before
                       chaining to PlayArea destruction. */
  puStack_8 = &LAB_016853f8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = PlayerPlayArea::vftable;
  *(undefined ***)((int)this + 8) = PlayerPlayArea::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0x48) != (void *)0x0) {
    PlayElement_detachFromParent(*(void **)((int)this + 0x48));
    if (*(undefined4 **)((int)this + 0x48) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x48))(1,uVar1);
    }
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  if (*(void **)((int)this + 0x4c) != (void *)0x0) {
    PlayElement_detachFromParent(*(void **)((int)this + 0x4c));
    if (*(undefined4 **)((int)this + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x4c))(1);
    }
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  if (*(void **)((int)this + 0x50) != (void *)0x0) {
    PlayElement_detachFromParent(*(void **)((int)this + 0x50));
    if (*(undefined4 **)((int)this + 0x50) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x50))(1);
    }
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  local_4 = 0xffffffff;
  PlayArea_dtor(this);
  ExceptionList = local_c;
  return;
}

