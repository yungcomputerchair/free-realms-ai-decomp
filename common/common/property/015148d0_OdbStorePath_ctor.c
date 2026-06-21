// addr: 0x015148d0
// name: OdbStorePath_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall OdbStorePath_ctor(int param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ODB store path/helper object, initializes its inline string
                       buffer, and calls two ODB setup helpers. */
  puStack_8 = &LAB_016b6fbe;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_4 = 0;
  FUN_01514860(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_015145a0();
  ExceptionList = local_c;
  return param_1;
}

