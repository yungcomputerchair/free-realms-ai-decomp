// addr: 0x01424050
// name: HasProperties_setProperty
// subsystem: common/common/all
// source (binary assert): common/common/all/HasProperties.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HasProperties_setProperty(void * this, char * propertyName, void *
   newValue) */

void __thiscall HasProperties_setProperty(void *this,char *propertyName,void *newValue)

{
                    /* Ensures the property key exists in mPropertySet and then assigns the supplied
                       value to it. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\all\\HasProperties.cpp",0x18);
  }
  FUN_01312380(propertyName);
  PropertySet_tryCopyPropertyValue(*(void **)((int)this + 4),(int)propertyName,newValue);
  return;
}

