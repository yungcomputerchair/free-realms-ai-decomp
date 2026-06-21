// addr: 0x013a09b0
// name: CollectionData_hasPopulatedArchetypeChild
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionData_hasPopulatedArchetypeChild(void * this) */

bool __fastcall CollectionData_hasPopulatedArchetypeChild(void *this)

{
  undefined4 *puVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  undefined4 *local_4;
  
                    /* Walks CollectionData children and returns true when a child has archetype
                       field 1 and a non-empty vector count. Evidence is
                       CollectionDataChildIterator_increment and calls to
                       CollectionItem_getArchetypeField5c and PropertyVector16_getCount. */
  puVar1 = *(undefined4 **)((int)this + 0x5c);
  local_4 = (undefined4 *)*puVar1;
  local_8 = (int)this + 0x58;
  while( true ) {
    puVar2 = local_4;
    iVar3 = local_8;
    if ((local_8 == 0) || (local_8 != (int)this + 0x58)) {
      FUN_00d83c2d();
    }
    if (puVar2 == puVar1) {
      return false;
    }
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    this_00 = (void *)puVar2[4];
    iVar3 = CollectionItem_getArchetypeField5c(this_00);
    iVar4 = PropertyVector16_getCount((int)this_00);
    if ((0 < iVar4) && (iVar3 == 1)) break;
    CollectionDataChildIterator_increment(&local_8);
  }
  return true;
}

