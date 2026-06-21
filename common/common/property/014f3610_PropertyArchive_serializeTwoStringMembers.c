// addr: 0x014f3610
// name: PropertyArchive_serializeTwoStringMembers
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyArchive_serializeTwoStringMembers(int * this, void * archive) */

void __thiscall PropertyArchive_serializeTwoStringMembers(void *this,void *archive)

{
                    /* Serializes two string-like members between virtual archive open/close
                       callbacks. It calls the vtable offsets 8 and 0xc around two FUN_013c23f0
                       string-write helper calls. */
  (**(code **)(*(int *)this + 8))(archive);
  Serializer_appendInteger(archive,*(uint *)((int)this + 4));
  Serializer_appendInteger(archive,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

