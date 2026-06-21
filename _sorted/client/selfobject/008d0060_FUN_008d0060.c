// addr: 0x008d0060
// name: FUN_008d0060
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_008d0060(undefined4 *param_1)

{
                    /* Initializes an unknown IString-bearing record with sentinel -1, zero numeric
                       fields, default string storage, two default ID words, and two trailing bool
                       bytes. Class evidence is insufficient for a safe name. */
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = SoeUtil::IString<char>::vftable;
  param_1[5] = &DAT_01be48fc;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = DAT_01be4850;
  param_1[9] = DAT_01be4854;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  return;
}

