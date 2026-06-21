// addr: 0x01302260
// name: PropertyOwner_removePropertyIfValid
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyOwner_removePropertyIfValid(void * this, void * propertyName) */

bool __thiscall PropertyOwner_removePropertyIfValid(void *this,void *propertyName)

{
  bool bVar1;
  undefined8 uVar2;
  
                    /* Calls a virtual validation/lookup method at vtable slot 0x5c, and removes the
                       property only if that method succeeds. */
  uVar2 = (**(code **)(*(int *)this + 0x5c))(propertyName);
  if ((void *)uVar2 == (void *)0x0) {
    return false;
  }
  bVar1 = PropertySet_removeProperty((void *)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  return bVar1;
}

