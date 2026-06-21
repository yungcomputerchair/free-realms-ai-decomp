// addr: 0x014e2a10
// name: PropertyArchive_deserializeNestedObject
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PropertyArchive_deserializeNestedObject(int * this, void * archive) */

uint __thiscall PropertyArchive_deserializeNestedObject(void *this,void *archive)

{
  void *archive_00;
  uint uVar1;
  
                    /* Wraps a virtual archive begin/end pair around a nested deserialize call.
                       Evidence is the calls through vtable offsets 0x10/0x14 and the inner call to
                       the similar field-reader FUN_014e3690. */
  archive_00 = archive;
  uVar1 = (**(code **)(*(int *)this + 0x10))(archive,&archive);
  if ((char)uVar1 != '\0') {
    uVar1 = PropertyArchive_deserializeStringMember(this,archive_00);
    if ((char)uVar1 != '\0') {
      uVar1 = (**(code **)(*(int *)this + 0x14))(archive_00);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}

