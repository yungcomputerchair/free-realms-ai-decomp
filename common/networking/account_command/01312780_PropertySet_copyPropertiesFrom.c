// addr: 0x01312780
// name: PropertySet_copyPropertiesFrom
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySet_copyPropertiesFrom(int source_property_set) */

void PropertySet_copyPropertiesFrom(int source_property_set)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
                    /* Copies non-null property entries from a source PropertySet map by iterating
                       its tree and inserting/cloning each key/value through the PropertySet
                       set-property helper. Evidence is the PropertySet map layout shared with
                       PropertySet_serialize and callers from cloneInto-style functions. */
  local_4 = **(int **)(source_property_set + 8);
  local_8 = source_property_set + 4;
  while( true ) {
    iVar3 = local_4;
    iVar2 = local_8;
    iVar1 = *(int *)(source_property_set + 8);
    if ((local_8 == 0) || (local_8 != source_property_set + 4)) {
      FUN_00d83c2d();
    }
    if (iVar3 == iVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
      if (iVar3 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
    }
    if (*(int *)(iVar3 + 0x10) != 0) {
      FUN_01312450(*(undefined4 *)(iVar3 + 0xc),*(int *)(iVar3 + 0x10));
    }
    RBTreeIterator_increment(&local_8);
  }
  return;
}

