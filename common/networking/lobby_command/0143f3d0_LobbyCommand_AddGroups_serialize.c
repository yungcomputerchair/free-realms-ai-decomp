// addr: 0x0143f3d0
// name: LobbyCommand_AddGroups_serialize
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_AddGroups_serialize(void * this, void * stream) */

int __thiscall LobbyCommand_AddGroups_serialize(void *this,void *stream)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  void *local_4;
  
                    /* Serializes LobbyCommand_AddGroups by entering a stream object, serializing
                       the LobbyCommand base, serializing the groups vector at offset 8, and closing
                       the stream. Evidence: neighboring ctor/dtor install
                       LobbyCommand_AddGroups::vftable and this routine calls the common
                       LobbyCommand serialize helper plus vector serializer. */
  local_4 = this;
  (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = LobbyCommand_deserialize(this,stream);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = stream;
      FUN_0143f2c0((int)this + 8);
      uVar3 = extraout_var_01;
      if (extraout_AL_00 != '\0') {
        iVar2 = (**(code **)(*(int *)this + 0x14))(stream);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

