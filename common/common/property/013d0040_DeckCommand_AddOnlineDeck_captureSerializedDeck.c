// addr: 0x013d0040
// name: DeckCommand_AddOnlineDeck_captureSerializedDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_AddOnlineDeck_captureSerializedDeck(void * this, void * deck)
    */

void __thiscall DeckCommand_AddOnlineDeck_captureSerializedDeck(void *this,void *deck)

{
  size_t _Size;
  bool bVar1;
  uint uVar2;
  void *_Dst;
  int local_20;
  int local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes an optional deck object into a PacketBuffer, records the resulting
                       byte length, allocates storage, and copies the serialized bytes into this
                       command. Evidence is caller constructing DeckCommand_AddOnlineDeck, virtual
                       serialize call on deck, PacketBuffer_getSize, and memcpy into fields at
                       +4/+8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ac68;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  PacketBuffer_init(&local_20);
  local_4 = 0;
  if (deck == (void *)0x0) {
    Serializer_appendInteger(&local_20,1);
  }
  else {
    bVar1 = Serializer_appendInteger(&local_20,0);
    if (bVar1) {
      (**(code **)(*(int *)deck + 0x28))(&local_20,uVar2);
    }
  }
  uVar2 = PacketBuffer_getSize(&local_20);
  *(uint *)((int)this + 4) = uVar2;
  _Dst = Mem_Alloc(uVar2);
  *(void **)((int)this + 8) = _Dst;
  _Size = *(size_t *)((int)this + 4);
  if ((int)(local_14 + _Size) <= local_1c) {
    _memcpy(_Dst,(void *)(local_14 + local_20),_Size);
    local_14 = local_14 + _Size;
  }
  local_4 = 0xffffffff;
  RawBuffer_free(&local_20);
  ExceptionList = local_c;
  return;
}

