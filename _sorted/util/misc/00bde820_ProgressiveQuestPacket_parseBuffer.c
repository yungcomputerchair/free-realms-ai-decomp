// addr: 0x00bde820
// name: ProgressiveQuestPacket_parseBuffer
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ProgressiveQuestPacket_parseBuffer(void * packet, void * buffer, int
   length_, bool allowTrailing_) */

bool __cdecl
ProgressiveQuestPacket_parseBuffer(void *packet,void *buffer,int length_,bool allowTrailing_)

{
  void *unaff_ESI;
  void *local_14;
  int local_10;
  void *local_c;
  void *local_8;
  char local_4;
  undefined1 local_3;
  
                    /* Builds a bounded reader over a packet buffer, deserializes the base
                       progressive quest packet and body, and succeeds only if no read error
                       occurred and trailing bytes are acceptable. */
  if ((packet != (void *)0x0) && (buffer != (void *)0x0)) {
    local_14 = buffer;
    local_c = buffer;
    local_8 = (void *)((int)buffer + length_);
    local_10 = length_;
    local_4 = '\0';
    local_3 = 0;
    BaseProgressiveQuestPacket_deserialize(&local_14);
    ProgressiveQuestPacket_deserializeBody(*(void **)((int)packet + 0xc),&local_14,unaff_ESI);
    if ((local_4 == '\0') &&
       ((allowTrailing_ || (local_8 == local_c || (int)local_8 - (int)local_c < 0)))) {
      return true;
    }
  }
  return false;
}

