// addr: 0x01379ce0
// name: Archetype_setPropertyValue
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_setPropertyValue(void * this, int propertyId, void * value) */

void __thiscall Archetype_setPropertyValue(void *this,int propertyId,void *value)

{
  void *this_00;
  
                    /* Sets a property value on the Archetype's property/format-specific data
                       object, and refreshes cached state when property 0x239 changes. The function
                       asserts the property container exists in Archetype.cpp before dispatching to
                       a virtual setter. */
  this_00 = (void *)(**(code **)(*(int *)this + 0x38))();
  if (this_00 == (void *)0x0) {
    FUN_012f5a60(&DAT_018dd0b8,"..\\common\\common\\property\\Archetype.cpp",0x48a);
  }
  FormatSpecificData_setVersion(this_00,*(int *)((int)this + 0xc));
  (**(code **)(*(int *)((int)this_00 + 4) + 0x10))(propertyId,value);
  if (propertyId == 0x239) {
    FUN_014315f0();
  }
  return;
}

