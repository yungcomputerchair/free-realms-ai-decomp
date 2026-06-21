// addr: 0x0151aaf0
// name: UserDataCommand_RequestPlayerMatches_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RequestPlayerMatches_serialize(void * this, void *
   archive) */

void __thiscall UserDataCommand_RequestPlayerMatches_serialize(void *this,void *archive)

{
                    /* Serializes a RequestPlayerMatches command by bracketing the archive
                       operation, serializing the inherited command string/member, then writing the
                       integer at this+8. */
  (**(code **)(*(int *)this + 8))(archive);
  CommandArchive_serializeStringMember(this,archive);
  Serializer_appendInteger(archive,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

