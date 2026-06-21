// addr: 0x008d0be0
// name: FUN_008d0be0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_008d0be0(int param_1)

{
                    /* Initializes a large unknown client-data record with many numeric defaults and
                       three SoeUtil::IString fields. No class/file/RTTI evidence is present in this
                       context. */
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined ***)(param_1 + 0x5c) = SoeUtil::IString<char>::vftable;
  *(undefined4 **)(param_1 + 0x60) = &DAT_01be48fc;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined ***)(param_1 + 0x6c) = SoeUtil::IString<char>::vftable;
  *(undefined4 **)(param_1 + 0x70) = &DAT_01be48fc;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined ***)(param_1 + 0x7c) = SoeUtil::IString<char>::vftable;
  *(undefined4 **)(param_1 + 0x80) = &DAT_01be48fc;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}

