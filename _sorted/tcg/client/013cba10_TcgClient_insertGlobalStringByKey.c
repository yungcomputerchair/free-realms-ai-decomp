// addr: 0x013cba10
// name: TcgClient_insertGlobalStringByKey
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgClient_insertGlobalStringByKey(int keyA_, int keyB_) */

void __cdecl TcgClient_insertGlobalStringByKey(int keyA_,int keyB_)

{
  int local_8;
  int local_4;
  
                    /* Ensures a global map/singleton is initialized, then inserts or looks up a
                       two-integer key via the map helper. Exact table purpose is unknown. */
  if (DAT_01cbdd84 == '\0') {
    TcgClient_initializeGlobalStringTables();
  }
  local_4 = keyB_;
  local_8 = keyA_;
  TcgClient_getGlobalPairStringSlot(&local_8);
  return;
}

