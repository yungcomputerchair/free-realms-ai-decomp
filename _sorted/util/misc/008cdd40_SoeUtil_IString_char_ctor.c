// addr: 0x008cdd40
// name: SoeUtil_IString_char_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SoeUtil_IString_char_ctor(undefined4 *param_1)

{
                    /* Initializes a SoeUtil::IString<char> object by setting its vtable, empty
                       string storage pointer, and zeroing length/capacity-related fields. */
  *param_1 = SoeUtil::IString<char>::vftable;
  param_1[1] = &DAT_01be48fc;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

