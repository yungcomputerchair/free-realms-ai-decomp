// addr: 0x0144a760
// name: FUN_0144a760
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0144a760(void * this, void * stream) */

void __thiscall FUN_0144a760(void *this,void *stream)

{
                    /* Serializes a scoped object by wrapping FUN_01447510 between stream begin/end
                       vfuncs. The owner class cannot be identified from this body alone. */
  (**(code **)(*(int *)this + 8))(stream);
  SerializableIntField_serialize(this,stream);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

