// addr: 0x00a45cc0
// name: AdventurersJournalInfoData_deserialize
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalInfoData_deserialize(void * reader, void * packet) */

void __cdecl AdventurersJournalInfoData_deserialize(void *reader,void *packet)

{
  void *regionDefinitionMap;
  
                    /* Reads the base journal packet header, then deserializes the region, hub,
                       hub-quest, and sticker definition maps from the packet's info-data payload.
                        */
  BaseAdventurersJournalPacket_deserializeHeader(packet,reader);
  regionDefinitionMap = *(void **)((int)packet + 0xc);
  AdventurersJournalInfoData_deserializeRegionDefinitions(reader,regionDefinitionMap);
  AdventurersJournalInfoData_deserializeHubDefinitions
            (reader,(void *)((int)regionDefinitionMap + 0x94));
  AdventurersJournalInfoData_deserializeHubQuestDefinitions
            (reader,(void *)((int)regionDefinitionMap + 0x128));
  AdventurersJournalInfoData_deserializeStickerDefinitions
            (reader,(void *)((int)regionDefinitionMap + 0x1bc));
  return;
}

