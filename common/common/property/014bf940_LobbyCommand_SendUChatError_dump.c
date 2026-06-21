// addr: 0x014bf940
// name: LobbyCommand_SendUChatError_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SendUChatError_dump(void * this, void * serializer) */

void __thiscall LobbyCommand_SendUChatError_dump(void *this,void *serializer)

{
  void *pvVar1;
  
                    /* Dumps/serializes the SendUChatError command by entering the base LobbyCommand
                       dump, appending the integer field at this+8, then closing the dump record. It
                       sits between SendUChatError clone/destructor functions and uses
                       LobbyCommand_dump plus Serializer_appendInteger. */
  pvVar1 = serializer;
  (**(code **)(*(int *)this + 8))();
  LobbyCommand_dump(this,serializer,pvVar1);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

