// addr: 0x01528bb0
// name: CommandArchive_serializeStringMember
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandArchive_serializeStringMember(int * this, void * archive) */

void __thiscall CommandArchive_serializeStringMember(void *this,void *archive)

{
                    /* Serializes one string-like member using the standard archive open/close
                       virtual callbacks. The member at this+1 is written by FUN_013c23f0 between
                       vtable calls at offsets 8 and 0xc. */
  (**(code **)(*(int *)this + 8))(archive);
  Serializer_appendInteger(archive,*(uint *)((int)this + 4));
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

