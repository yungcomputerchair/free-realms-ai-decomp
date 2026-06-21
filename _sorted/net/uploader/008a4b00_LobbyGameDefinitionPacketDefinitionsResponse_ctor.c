// addr: 0x008a4b00
// name: LobbyGameDefinitionPacketDefinitionsResponse_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyGameDefinitionPacketDefinitionsResponse_ctor(void * this, uint
   count_, void * definitions) */

void * __thiscall
LobbyGameDefinitionPacketDefinitionsResponse_ctor(void *this,uint count_,void *definitions)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a LobbyGameDefinitionPacketDefinitionsResponse via the base lobby
                       game-definition packet constructor and stores the response payload arguments.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157def8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008a49d0(2);
  *(undefined ***)this = LobbyGameDefinitionPacketDefinitionsResponse::vftable;
  *(uint *)((int)this + 0xc) = count_;
  *(void **)((int)this + 0x10) = definitions;
  ExceptionList = local_c;
  return this;
}

