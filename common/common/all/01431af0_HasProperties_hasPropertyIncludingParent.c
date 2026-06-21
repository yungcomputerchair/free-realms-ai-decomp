// addr: 0x01431af0
// name: HasProperties_hasPropertyIncludingParent
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool HasProperties_hasPropertyIncludingParent(void * this, void * propertyId)
    */

bool __thiscall HasProperties_hasPropertyIncludingParent(void *this,void *propertyId)

{
  char extraout_AL;
  undefined1 uVar1;
  
                    /* Checks whether this object has a property locally, and if not delegates to a
                       related HasProperties object at offset 0x3c. Returns false when neither
                       source reports the property. */
  HasProperties_hasProperty(this,propertyId);
  if (extraout_AL == '\x01') {
    return true;
  }
  if (*(int **)((int)this + 0x3c) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x3c) + 0x84))(propertyId);
    return (bool)uVar1;
  }
  return false;
}

