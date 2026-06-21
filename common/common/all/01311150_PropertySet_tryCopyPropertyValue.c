// addr: 0x01311150
// name: PropertySet_tryCopyPropertyValue
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertySet_tryCopyPropertyValue(void * this, int propertyId_, void *
   outValueData) */

bool __thiscall PropertySet_tryCopyPropertyValue(void *this,int propertyId_,void *outValueData)

{
  int iVar1;
  void *local_8;
  int local_4;
  
                    /* Looks up a property id in the PropertySet tree and, when a non-null stored
                       ValueData is present, copies it into the output ValueData. Returns false if
                       the property is absent or null. */
  RBTreeInt_lowerBound((void *)((int)this + 4),&local_8,&propertyId_);
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
    if (*(int *)(local_4 + 0x10) != 0) {
      if (local_4 == *(int *)((int)local_8 + 4)) {
        FUN_00d83c2d();
      }
      FUN_013010e0(outValueData);
      return true;
    }
  }
  return false;
}

