// addr: 0x008a4970
// name: BaseLobbyGameDefinitionPacket_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseLobbyGameDefinitionPacket_ctor(void * this) */

void __fastcall BaseLobbyGameDefinitionPacket_ctor(void *this)

{
                    /* Constructs a BaseLobbyGameDefinitionPacket by initializing BasePacket opcode
                       0x66 and clearing the suboperation/definition field. */
  *(undefined ***)this = BasePacket::vftable;
  *(undefined4 *)((int)this + 4) = 0x66;
  *(undefined ***)this = BaseLobbyGameDefinitionPacket::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

