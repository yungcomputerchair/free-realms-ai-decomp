// addr: 0x0140d010
// name: Card_checkInstanceDataModifierPredicate
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_checkInstanceDataModifierPredicate(void * this, int instanceId_) */

bool __thiscall Card_checkInstanceDataModifierPredicate(void *this,int instanceId_)

{
  char cVar1;
  bool bVar2;
  
                    /* Checks card modifier predicates against instance data and logs/asserts when
                       instance data cannot be retrieved. */
  cVar1 = (**(code **)(*(int *)this + 0x1e8))();
  if (cVar1 != '\x01') {
    if (*(int **)((int)this + 100) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)((int)this + 100) + 0x68))(instanceId_);
      if (cVar1 == '\0') {
        return false;
      }
      bVar2 = Card_checkModifierPredicate68(this,(void *)instanceId_,instanceId_);
      return bVar2;
    }
    Game_logGeneralFormatted
              (*(undefined4 *)((int)this + 0x30),"Instance data was NULL on %d and mPIS=%d",
               *(undefined4 *)((int)this + 0x34),*(undefined1 *)((int)this + 0x68));
    FUN_012f5dc0("Couldn\'t get instanceData for card: %d (%d)",*(undefined4 *)((int)this + 0x34),
                 *(undefined4 *)((int)this + 0x60));
  }
  return true;
}

