// addr: 0x008a4b70
// name: LobbyGameDefinitionPacketDefinitionsResponse_dtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyGameDefinitionPacketDefinitionsResponse_dtor(void * this) */

void __fastcall LobbyGameDefinitionPacketDefinitionsResponse_dtor(void *this)

{
                    /* Destructor/vtable reset chain for
                       LobbyGameDefinitionPacketDefinitionsResponse, stepping through
                       BaseLobbyGameDefinitionPacket and BasePacket vtables. */
  *(undefined ***)this = LobbyGameDefinitionPacketDefinitionsResponse::vftable;
  *(undefined ***)this = BaseLobbyGameDefinitionPacket::vftable;
  *(undefined ***)this = BasePacket::vftable;
  return;
}

