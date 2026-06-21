// addr: 0x01423fd0
// name: HasProperties_getProperty
// subsystem: common/common/all
// source (binary assert): common/common/all/HasProperties.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HasProperties_getProperty(void * this, char * propertyName, void *
   outValue) */

void __thiscall HasProperties_getProperty(void *this,char *propertyName,void *outValue)

{
                    /* Asserts mPropertySet exists, then delegates to the underlying property set
                       lookup routine for the supplied property key/output. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\all\\HasProperties.cpp",9);
  }
  FUN_013111d0(propertyName,outValue);
  return;
}

