// addr: 0x00a45bf0
// name: AdventurersJournalQuestUpdatePacket_deserializeFromBuffer
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AdventurersJournalQuestUpdatePacket_deserializeFromBuffer(void * packet,
   void * buffer, int length_, bool allowTrailingBytes_) */

bool __cdecl
AdventurersJournalQuestUpdatePacket_deserializeFromBuffer
          (void *packet,void *buffer,int length_,bool allowTrailingBytes_)

{
  void *local_14;
  int local_10;
  void *local_c;
  void *local_8;
  char local_4;
  undefined1 local_3;
  
                    /* Builds a packet reader, reads the base journal packet header, deserializes
                       quest-state updates into the packet payload, and validates reader
                       completion/error state. */
  if ((packet != (void *)0x0) && (buffer != (void *)0x0)) {
    local_14 = buffer;
    local_c = buffer;
    local_8 = (void *)((int)buffer + length_);
    local_10 = length_;
    local_4 = '\0';
    local_3 = 0;
    BaseAdventurersJournalPacket_deserializeHeader(packet,&local_14);
    AdventurersJournalQuestUpdatePacket_deserializeQuestStates
              (&local_14,*(void **)((int)packet + 0xc));
    if ((local_4 == '\0') &&
       ((allowTrailingBytes_ || (local_8 == local_c || (int)local_8 - (int)local_c < 0)))) {
      return true;
    }
  }
  return false;
}

