// addr: 0x013a0930
// name: CollectionData_getTotalChildPropertyCount
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CollectionData_getTotalChildPropertyCount(void * this) */

int __fastcall CollectionData_getTotalChildPropertyCount(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Iterates child collection nodes and sums PropertyVector16_getCount for each
                       non-null child. Evidence is traversal through the child list at offset 0x5c
                       and caller/known name CollectionDataChildIterator_increment. */
  local_4 = *(undefined4 **)((int)this + 0x5c);
  local_c = (undefined4 *)*local_4;
  iVar3 = 0;
  local_10 = (int)this + 0x58;
  while( true ) {
    puVar1 = local_c;
    iVar2 = local_10;
    if ((local_10 == 0) || (local_10 != (int)this + 0x58)) {
      FUN_00d83c2d();
    }
    if (puVar1 == local_4) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar1 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar1[4] != 0) {
      iVar2 = PropertyVector16_getCount(puVar1[4]);
      iVar3 = iVar3 + iVar2;
    }
    CollectionDataChildIterator_increment(&local_10);
  }
  return iVar3;
}

