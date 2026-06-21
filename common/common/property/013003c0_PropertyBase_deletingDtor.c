// addr: 0x013003c0
// name: PropertyBase_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyBase_deletingDtor(void * this, char flags) */

void * __thiscall PropertyBase_deletingDtor(void *this,char flags)

{
  byte in_stack_00000008;
  
                    /* Deleting destructor thunk that runs cleanup helper FUN_012b58e0 and frees the
                       object when requested. No vftable or RTTI is present, so the class name is
                       generic to the property subsystem. */
  PropertyTree_destroyNodesAndStorage(this);
  if ((in_stack_00000008 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

