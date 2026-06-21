// addr: 0x013d03a0
// name: DeckCommand_AddOnlineDeck_deserializeDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall DeckCommand_AddOnlineDeck_deserializeDeck(int param_1)

{
  char cVar1;
  uint size;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If serialized deck bytes are present, wraps them in a PacketBuffer and asks
                       the component factory deserializer to instantiate a deck object, returning
                       the new object pointer or null. Evidence is RawBuffer_assign followed by
                       component deserialize helper FUN_01302e20. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168acf8;
  local_c = ExceptionList;
  size = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != 0) {
    PacketBuffer_init(local_20);
    local_4 = 0;
    RawBuffer_assign(local_20,*(void **)(param_1 + 8),*(void **)(param_1 + 4),size);
    local_24 = 0;
    cVar1 = FUN_01302e20(local_20,&local_24);
    if (cVar1 != '\0') {
      local_4 = 0xffffffff;
      RawBuffer_free(local_20);
      ExceptionList = local_c;
      return local_24;
    }
    local_4 = 0xffffffff;
    RawBuffer_free(local_20);
  }
  ExceptionList = local_c;
  return 0;
}

