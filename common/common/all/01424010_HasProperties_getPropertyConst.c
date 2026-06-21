// addr: 0x01424010
// name: HasProperties_getPropertyConst
// subsystem: common/common/all
// source (binary assert): common/common/all/HasProperties.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HasProperties_getPropertyConst(void * this, char * propertyName, void *
   outValue) */

void __thiscall HasProperties_getPropertyConst(void *this,char *propertyName,void *outValue)

{
                    /* Second HasProperties get-property wrapper: verifies mPropertySet then
                       delegates to the same property-set lookup as the non-const overload. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\all\\HasProperties.cpp",0x11);
  }
  FUN_013111d0(propertyName,outValue);
  return;
}

