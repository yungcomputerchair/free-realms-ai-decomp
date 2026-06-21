// addr: 0x014478f0
// name: FUN_014478f0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_014478f0(void * this, void * stream) */

void __thiscall FUN_014478f0(void *this,void *stream)

{
                    /* Serializes a scoped object by beginning a write scope, delegating nested
                       serialization to FUN_01447510, and closing the scope. No class-identifying
                       evidence appears in the function. */
  (**(code **)(*(int *)this + 8))(stream);
  SerializableIntField_serialize(this,stream);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

