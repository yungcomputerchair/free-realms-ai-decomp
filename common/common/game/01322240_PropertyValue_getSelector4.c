// addr: 0x01322240
// name: PropertyValue_getSelector4
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyValue_getSelector4(void * value) */

int __fastcall PropertyValue_getSelector4(void *value)

{
  int iVar1;
  
                    /* Thin virtual wrapper that invokes vtable slot +0x50 with selector constant 4
                       and returns the resulting value. */
  iVar1 = (**(code **)(*(int *)value + 0x50))(4);
  return iVar1;
}

