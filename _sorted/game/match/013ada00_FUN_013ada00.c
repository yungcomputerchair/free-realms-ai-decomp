// addr: 0x013ada00
// name: FUN_013ada00
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 lookupTripleValueByKey_alt(int object_, undefined4 key_, int
   valueIndex_) */

undefined4 __thiscall lookupTripleValueByKey_alt(void *this,int object_,int key_,int valueIndex_)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Looks up a key in a small map at object+4 and returns one selected value slot
                       from the node, or 0 if absent. */
  FUN_013ad8d0(&local_8,&object_);
  iVar1 = *(int *)((int)this + 8);
  if ((local_8 == 0) || (local_8 != (int)this + 4)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(local_4 + 0x10 + key_ * 4);
  }
  return 0;
}

