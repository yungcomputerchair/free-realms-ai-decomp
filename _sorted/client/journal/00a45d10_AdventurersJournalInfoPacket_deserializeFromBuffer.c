// addr: 0x00a45d10
// name: AdventurersJournalInfoPacket_deserializeFromBuffer
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AdventurersJournalInfoPacket_deserializeFromBuffer(void * packet, void *
   buffer, int length_, bool allowTrailingBytes_) */

bool __cdecl
AdventurersJournalInfoPacket_deserializeFromBuffer
          (void *packet,void *buffer,int length_,bool allowTrailingBytes_)

{
  void *local_14;
  int local_10;
  void *local_c;
  void *local_8;
  char local_4;
  undefined1 local_3;
  
                    /* Builds a packet reader over the supplied buffer, deserializes the full
                       journal-info payload, and reports success if no reader error occurred and
                       trailing-byte rules are satisfied. */
  if ((packet != (void *)0x0) && (buffer != (void *)0x0)) {
    local_14 = buffer;
    local_c = buffer;
    local_8 = (void *)((int)buffer + length_);
    local_10 = length_;
    local_4 = '\0';
    local_3 = 0;
    AdventurersJournalInfoData_deserialize(&local_14,packet);
    if ((local_4 == '\0') &&
       ((allowTrailingBytes_ || (local_8 == local_c || (int)local_8 - (int)local_c < 0)))) {
      return true;
    }
  }
  return false;
}

