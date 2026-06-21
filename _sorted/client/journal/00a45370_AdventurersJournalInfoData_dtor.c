// addr: 0x00a45370
// name: AdventurersJournalInfoData_dtor
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalInfoData_dtor(void * this) */

void __cdecl AdventurersJournalInfoData_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys the aggregate journal-info payload by tearing down its sticker,
                       hub-quest, hub, and region definition maps in reverse construction order. */
  puStack_8 = &LAB_015b4742;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  FUN_00a45300(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4._0_1_ = 1;
  FUN_00a45290();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00a45220();
  local_4 = 0xffffffff;
  FUN_00a451b0();
  ExceptionList = local_c;
  return;
}

