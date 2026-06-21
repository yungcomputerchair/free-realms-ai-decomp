// addr: 0x00faa8d0
// name: Login_GameServerData_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Login_GameServerData_ctor(undefined4 *param_1)

{
                    /* Constructs Login::GameServerData: initializes RefCounted base, sets
                       GameServerData vtable, and initializes StringFixed/IString members and
                       counters. */
  *param_1 = SoeUtil::RefCounted::vftable;
  param_1[1] = 0;
  param_1[1] = 1;
  *param_1 = Login::GameServerData::vftable;
  param_1[2] = DAT_01cb4dd0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = SoeUtil::StringFixed<64>::vftable;
  param_1[4] = &DAT_01cb4db8;
  param_1[0x18] = 0;
  param_1[0x1a] = &DAT_01cb4db8;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = SoeUtil::StringFixed<256>::vftable;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = &DAT_01cb4db8;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x60] = SoeUtil::StringFixed<4096>::vftable;
  *(undefined1 *)(param_1 + 0x465) = 0;
  param_1[0x466] = 0;
  param_1[0x467] = SoeUtil::IString<char>::vftable;
  param_1[0x468] = &DAT_01cb4db8;
  param_1[0x46a] = 0;
  param_1[0x469] = 0;
  return;
}

