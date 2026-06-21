// addr: 0x01311c50
// name: PropertySet_removeProperty
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertySet_removeProperty(void * this, int propertyId_) */

bool __fastcall PropertySet_removeProperty(void *this,int propertyId_)

{
  int iVar1;
  void *local_8;
  int local_4;
  
                    /* Removes a property from the PropertySet tree by id, deleting the stored
                       ValueData pointer when present. Returns true when an entry was found and
                       erased. */
  RBTreeInt_lowerBound((void *)((int)this + 4),&local_8,(int *)&stack0x00000004);
  iVar1 = *(int *)((int)this + 8);
  if ((local_8 == (void *)0x0) || (local_8 != (void *)((int)this + 4))) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)((int)local_8 + 4)) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(local_4 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(local_4 + 0x10))(1);
    }
    FUN_01311480(&local_8,local_8,local_4);
    return true;
  }
  return false;
}

