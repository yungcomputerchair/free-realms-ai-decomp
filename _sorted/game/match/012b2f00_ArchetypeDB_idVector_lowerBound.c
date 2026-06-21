// addr: 0x012b2f00
// name: ArchetypeDB_idVector_lowerBound
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_idVector_lowerBound(void * idVector, int * outIter, int id_)
    */

void __thiscall ArchetypeDB_idVector_lowerBound(void *this,void *idVector,int *outIter,int id_)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
                    /* Finds the lower-bound iterator for an id in ArchetypeDB's sorted id vector.
                       It validates the vector range and calls a binary-search helper with the
                       comparator flag at +0x11. */
  if (this == (void *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = (undefined1 *)((int)this + 0x11);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 < *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 8) < uVar2) {
    FUN_00d83c2d();
  }
  uVar3 = FUN_012b2210(uVar2,uVar1,outIter,*puVar4,0);
  *(void **)idVector = this;
  *(undefined4 *)((int)idVector + 4) = uVar3;
  return;
}

