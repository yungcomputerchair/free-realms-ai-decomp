// addr: 0x01424090
// name: HasProperties_removeProperty
// subsystem: common/common/all
// source (binary assert): common/common/all/HasProperties.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HasProperties_removeProperty(void * this, char * propertyName) */

void __fastcall HasProperties_removeProperty(void *this,char *propertyName)

{
  char *extraout_EDX;
  
                    /* Asserts mPropertySet and removes the named property from the underlying
                       property set. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\all\\HasProperties.cpp",0x1f);
    propertyName = extraout_EDX;
  }
  PropertySet_removeProperty(*(void **)((int)this + 4),(int)propertyName);
  return;
}

