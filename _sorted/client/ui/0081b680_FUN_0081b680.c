// addr: 0x0081b680
// name: FUN_0081b680
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0081b680(undefined4 *param_1)

{
                    /* Constructor-like initializer for a small record containing two
                       SoeUtil::IString<char> members followed by numeric/flag fields. The record's
                       semantic UI role is not identified. */
  *param_1 = SoeUtil::IString<char>::vftable;
  param_1[1] = &DAT_01be10d8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = SoeUtil::IString<char>::vftable;
  param_1[5] = &DAT_01be10d8;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[8] = 0;
  return;
}

