// addr: 0x014240c0
// name: HasProperties_hasProperty
// subsystem: common/common/all
// source (binary assert): common/common/all/HasProperties.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HasProperties_hasProperty(void * this, char * propertyName) */

void __thiscall HasProperties_hasProperty(void *this,char *propertyName)

{
                    /* Asserts that mPropertySet is present, then delegates to the property-set
                       has/exists test for the requested key. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\all\\HasProperties.cpp",0x25);
  }
  FUN_013110e0(propertyName);
  return;
}

