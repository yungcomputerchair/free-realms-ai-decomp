// addr: 0x00ac9a90
// name: HousingPacket_parseFixtureLists
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool HousingPacket_parseFixtureLists(void * packet, void * data, int length_,
   bool allowTrailing_) */

bool __cdecl
HousingPacket_parseFixtureLists(void *packet,void *data,int length_,bool allowTrailing_)

{
  void *local_14;
  int local_10;
  void *local_c;
  void *local_8;
  char local_4;
  undefined1 local_3;
  
                    /* Builds a temporary reader over a packet buffer and parses several housing
                       fixture lists/arrays into the packet, returning true when parsing succeeds
                       and trailing bytes are acceptable. Housing context comes from called
                       HousingFixtureRef list parser and neighboring housing packet code. */
  if ((packet != (void *)0x0) && (data != (void *)0x0)) {
    local_14 = data;
    local_c = data;
    local_8 = (void *)((int)data + length_);
    local_10 = length_;
    local_4 = '\0';
    local_3 = 0;
    FUN_00ab2bc0(&local_14);
    Stream_ReadHousingFixtureRefList(&local_14,*(void **)((int)packet + 0xc));
    Stream_ReadObjectList300(&local_14,*(void **)((int)packet + 0x10));
    Stream_ReadU32List(&local_14);
    if ((local_4 == '\0') &&
       ((allowTrailing_ || (local_8 == local_c || (int)local_8 - (int)local_c < 0)))) {
      return true;
    }
  }
  return false;
}

